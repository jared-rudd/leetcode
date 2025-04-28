// Problem: https://leetcode.com/problems/remove-duplicates-from-sorted-array
// Difficulty: Easy

#include <stdlib.h>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        // So initially thoughts are the following:
        // Can do this while going through once, therefore O(n)
        // Can do this using index pointer logic, so
            // we have one index thats traversing every value
            // we have another index thats keeping track of unique values

        int currIdx = 0;
        int nextIdx = 1;
        while (nextIdx < nums.size()) {

            if (nums[currIdx] != nums[nextIdx]) {
                nums[currIdx+1] = nums[nextIdx];
                currIdx++;
            }

            nextIdx++;
        }

        return currIdx + 1;
    }
};