#include<bits/stdc++.h>
using namespace std;
int fun(int ind,vector<int>&height,vector<int>&dp){
  //base case;
  if(ind==0) return 0;
  if(dp[ind]!=-1) return dp[ind];

  int step2=INT_MAX;
  int step1=fun(ind-1,height,dp)+abs(height[ind]-height[ind-1]);
  if(ind>1){
    int step2=fun(ind-2,height,dp)+abs(height[ind]-height[ind-2]);
  }

  return dp[ind]=min(step1,step2);
}
int main(){
  vector<int> height{30,27,63,98,78,34,34};
  int n=height.size();
  vector<int>dp(n,-1);
  cout<<fun(n-1,height,dp);
  return 0;
}
