/*
Find the contiguous subarray within an array (containing at least one number) which has the largest sum.

For example, given the array [?2,1,?3,4,?1,2,1,?5,4],
the contiguous subarray [4,?1,2,1] has the largest sum = 6.
*/

class Solution {
public:
    int maxSubArray(int A[], int n) {
        int max = A[0];
        int cur = A[0];
        int i = 1;
        while (i<n) {
            if (A[i] > 0) {
                if (cur < 0) {
                    cur = A[i];
                } else {
                    cur += A[i];
                }
            } else {
                if (A[i] > cur) {
                    cur = A[i];
                }else if (cur + A[i] > 0) {
                    cur += A[i];
                }else {
                    cur = A[i];
                }
            }
            max = max > cur ? max : cur;
            i++;
        }
        return max;
    }
};