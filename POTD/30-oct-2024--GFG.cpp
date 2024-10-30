
/*
GFG

https://www.geeksforgeeks.org/problems/pairs-with-difference-k1713/1

Pairs with difference k




*/


class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairsWithDiffK(vector<int>& arr, int k) {
        // code here
       int ans=0;
       unordered_map<int,int>mp;
       for(auto it:arr){
           mp[it]++;
       }
       for(auto it:arr){
           if(mp[it+k]>0){
               ans+=mp[it+k];
           }
       }
       return ans;
    }
};
