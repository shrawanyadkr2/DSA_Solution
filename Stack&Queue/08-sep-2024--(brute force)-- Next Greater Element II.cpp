
/*
Link:-
    https://leetcode.com/problems/next-greater-element-ii/submissions/1383280877/
   
*/

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);  // Initialize the answer vector with -1

        // Loop through each element to find the next greater element
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < i + n; ++j) {
                int ind = j % n;  // Circular index
                if (nums[ind] > nums[i]) {
                    ans[i] = nums[ind];  // Found the next greater element
                    break;  // Stop after finding the next greater element
                }
            }
        }

        return ans;
    }
};
