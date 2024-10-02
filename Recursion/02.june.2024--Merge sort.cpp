/*
Link:-
--->  https://www.geeksforgeeks.org/merge-sort/
----> https://leetcode.com/problems/sort-an-array/submissions/1289199022
------>https://www.geeksforgeeks.org/problems/merge-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=merge-sort
*/
class Solution {
public:
    // Merge function to merge two halves
    void merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> temp;
        int left = low;
        int right = mid + 1;

        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left]);
                left++;
            } else {
                temp.push_back(nums[right]);
                right++;
            }
        }

        while (left <= mid) {
            temp.push_back(nums[left]);
            left++;
        }

        while (right <= high) {
            temp.push_back(nums[right]);
            right++;
        }

        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }
    }

    // Sort function to perform merge sort
    void sort(vector<int>& nums, int low, int high) {
        if (low >= high) return ;
            int mid = low + (high - low) / 2;
            sort(nums, low, mid);
            sort(nums, mid + 1, high);
            merge(nums, low, mid, high);
        
    }

    // Function to sort array
    vector<int> sortArray(vector<int>& nums) {
        sort(nums, 0, nums.size() - 1);
        return nums;
    }
};
