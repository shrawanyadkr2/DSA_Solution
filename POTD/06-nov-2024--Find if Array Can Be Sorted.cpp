/*
Link:
https://leetcode.com/problems/find-if-array-can-be-sorted/?envType=daily-question&envId=2024-11-06

prob:Find if Array Can Be Sorted




*/


class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        vector<int> setBits; // initialise a empty vector

        for (auto it : nums) {
            int cnt = 0;  // Reset cnt for each number
            // int it = nums[i];

            while (it != 0) {
                if (it % 2 == 1) {
                    cnt++;
                }
                it /= 2;
            }

            setBits.push_back(cnt);  // Directly assign cnt to setBits[i]
        }

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] > nums[j]) {
                    if (setBits[i] != setBits[j]) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
