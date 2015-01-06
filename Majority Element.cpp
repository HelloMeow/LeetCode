/*
Given an array of size n, find the majority element. The majority element is the element that appears more than ? n/2 ? times.

You may assume that the array is non-empty and the majority element always exist in the arra
*/
class Solution {
public:
    int majorityElement(vector<int> &num) {
        map<int, int> m;
        int maxCount = 0;
        int maxValue = 0;
        for (vector<int>::iterator iter = num.begin();
        iter != num.end();
        iter++) {
            if (m.find(*iter) == m.end()) {
                m[*iter] = 1;
            } else {
                m[*iter]++;
            }
            if (m[*iter] > maxCount) {
                maxCount = m[*iter];
                maxValue = *iter;
            }
        }
        return maxValue;
    }
};