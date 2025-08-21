// Problem: https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii
// Difficulty: Medium

#include <stdlib.h>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Basically, we are going to have the index that we are currently at, so the first pass through
        // Then we will have an index which indicates where we are at in-place (i.e. only valid entries)
        // We also need a way to counter, so a counter variable is used
            // At 2, we no longer accept the current value

        // BETTER SOLUTION: just use two pointers, use k as initial counter until 2, then compare values 2 values back

        int k = 0;
        
        for (int currIdx = 0; currIdx < nums.size(); currIdx++)
        {
            if (k < 2 || nums[currIdx] != nums[k - 2])
            {
                nums[k++] = nums[currIdx];
            }
        }

        return k;
    }
};