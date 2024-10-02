
/*
Link:-
    https://leetcode.com/problems/next-greater-element-ii/submissions/1383280877/
    
*/

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
       /* int n = nums.size();
        vector<int> ans(n, -1); 
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < i + n; ++j) {
                int ind = j % n; 
                if (nums[ind] > nums[i]) {
                    ans[i] = nums[ind]; 
                    break;  
                }
            }
        }
        return ans;
        */

        //optimal-approach
        int n=nums.size();
        vector<int >ans(n,-1);
        std::stack<int>st;
        for(int i=((2*n)-1);i>=0;i--){
            while(!st.empty() && st.top()<=nums[i%n]){
                st.pop();
            }
            if(i<n){
                // ans[i]=st.empty?-1:st.top();
                 ans[i] = st.empty() ? -1 : st.top(); 

            }
            st.push(nums[i%n]);
        }
        return ans;
    }
};
