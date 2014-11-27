/*
Reverse digits of an integer.

Example1: x = 123, return 321
Example2: x = -123, return -321
*/


class Solution {
public:
    int reverse(int x) {
        
	    bool isPositive = x >= 0;
	    long long tx = (isPositive ? x : -1 * (long long)x);
	    long long y = 0;
	    while (tx != 0) {
		    y = y * 10 + tx % 10;
		    tx /= 10;
	    }

	    if (y > (unsigned int)(2 << 31 - 1)) return 0;

	    return isPositive ? (int)y : (int)(-1 * y);
    }
};

// A better and cleared solution
public int reverse(int x) {
   int ret = 0;
   while (x != 0) {
      // handle overflow/underflow
      if (Math.abs(ret) > 214748364) {
         return 0;
      }
      ret = ret * 10 + x % 10;
      x /= 10;
   }
   return ret;
}