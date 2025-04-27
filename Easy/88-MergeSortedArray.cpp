// Problem: https://leetcode.com/problems/merge-sorted-array/
// Difficulty: Easy

#include <stdlib.h>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        // for loop through m or n times, whichever is smaller, append rest after

        // nah, let's do a while loop going through both arrays, 
        // constructing the new array piece-wise, this would be O(m + n)

        // constructing it backwards would allow us to do it without additional space

        int numLoops = m + n;
        int loopIdx = m + n - 1; // start with minus 1 to include 0

        int mIdx = m - 1; // start with minus 1 to include 0
        int nIdx = n - 1; // start with minus 1 to include 0

        // 3 cases:
        // 1. integer in nums1 is larger
        // 2. integer in nums2 is larger
        // 3. intenger is same 

        while (numLoops > 0) {
            // case 1
            if ((mIdx >= 0 && nIdx >=0) && 
                (nums1[mIdx] > nums2[nIdx])) {
                nums1[loopIdx--] = nums1[mIdx--];
            }
            // case 2
            else if ((mIdx >= 0 && nIdx >=0) && 
                (nums1[mIdx] < nums2[nIdx])) {
                nums1[loopIdx--] = nums2[nIdx--];
            }
            // case 3
            else {
                if (mIdx >= 0) {
                    nums1[loopIdx--] = nums1[mIdx--];
                }
                else if (nIdx >= 0) {
                    nums1[loopIdx--] = nums2[nIdx--];
                }
            }

            numLoops--;
        }


    }
};