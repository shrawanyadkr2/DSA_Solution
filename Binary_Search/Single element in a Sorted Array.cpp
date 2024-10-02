/*link:-
https://leetcode.com/problems/single-element-in-a-sorted-array/description/
*/
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // using Binary search
        int s=0;
        int e=nums.size()-1;
        int mid;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            //edge case if single element present in nums
            if(s==e)
            {
                return nums[s];
            }
            //bit manupulation
            if((mid & 1 )== 0)
            {
                if(nums[mid]==nums[mid+1])
                {
                    s=mid+2;
                    //ydi mid+1 wala case explore ho gya hai to uska koi importance nhi hai ynha
                }
                else{
                    e=mid;
                }
            }
            else {
                if(nums[mid]==nums[mid-1])
                {
                    s=mid+1;
                }
                else {
                    e=mid-1;
                }
                
            }
           
        }
        return -1;

        
    }
};
