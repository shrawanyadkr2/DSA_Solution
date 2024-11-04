
/*
Link:
https://www.geeksforgeeks.org/problems/find-all-triplets-with-zero-sum/1


prob:
Find All Triplets with Zero Sum


*/

class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
         int size=arr.size();
        vector<vector<int>> out;
        unordered_map<int,vector<int>> u;
        for(int i=0;i<size;i++){
            u[arr[i]].push_back(i);
        }
        for(int i=0;i<size-2;i++){
            for(int j=i+1;j<size-1;j++){
                if(u.find(0-(arr[i]+arr[j]))!=u.end()){
                    for(int n:u[0-(arr[i]+arr[j])]){
                        if(n>j){
                            out.push_back({i,j,n});
                        }
                    }
                }
            }
        }
        return out;
    }
};
