// Problem: https://leetcode.com/problems/majority-element/
// Difficulty: Easy

#include <stdlib.h>
#include <vector>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Boyer-Moore majority candidate
        
        int candidate = 0;
        int votes = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (votes == 0)
            {
                candidate = nums[i];
            }
            
            votes = (candidate == nums[i]) ? votes + 1 : votes - 1;
        }

        return candidate;
    }
};