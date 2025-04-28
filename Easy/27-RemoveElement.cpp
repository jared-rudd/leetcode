// Problem: https://leetcode.com/problems/remove-element/
// Difficulty: Easy

#include <stdlib.h>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        // Remove all occurences of val in nums
        // in-place: meaning in same memory container

        int replaceIdx = 0;
        for (int idx = 0; idx < nums.size(); idx++) {
            if (nums[idx] != val) {
                nums[replaceIdx++] = nums[idx];
            }
        }

        return replaceIdx;
    }
};