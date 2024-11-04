/*
Link:
https://leetcode.com/contest/weekly-contest-421/problems/find-the-maximum-factor-score-of-array/

prob:
Find the Maximum Factor Score of Array


*/

class Solution {
public:
    long long maxScore(vector<int>& nums) {
        int n=nums.size();
        long long ans=0;
        for(int i=0;i<=n;i++){
            vector<int>a;
            for(int j=0;j<n;j++){
                if(i!=j) a.push_back(nums[j]);
            }
            if(a.empty()) continue;
            long long g=a[0],l=a[0];
            for(int j=1;j<a.size();j++){
                g=gcd(g,a[j]);
                l=lcm(l,a[j]);
                
            }
            ans=max(ans,l*g);
        }
        return ans;
    }
};
