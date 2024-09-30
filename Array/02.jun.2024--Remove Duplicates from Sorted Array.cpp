/*
Link:-

https://leetcode.com/problems/remove-duplicates-from-sorted-array/

*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        vector<int >st;
        int i=0;
        while(i<nums.size())
        {
             if (nums.empty())
            {
                st.push_back(nums[i]);
               /// i++;

            }
            else if(nums[i]==st.back())
            {
                i++;
            }
            else{
                st.push_back(nums[i]);
            }
            i++;
        }
        
        return st;
        

        
    }
};
