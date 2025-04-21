#include<bits/stdc++.h>
using namespace std;
// int fun(int n , vector<int>&dp){
//   if()
// }

int main(){
  int n=5;
  vector<int>dp(n+1,-1);
  
  //make base case in form of index
  dp[0]=0;
  dp[1]=1;

  for(int i=2;i<=n;i++){
    dp[i] =dp[i-2]+dp[i-1];

  }
  cout<<dp[n];
  return 0;
}
