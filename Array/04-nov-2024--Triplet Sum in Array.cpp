/*  
link:
https://www.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1

prob:
Triplet Sum in Array

*/ 

class Solution {
  public:

    // Should return true if there exists a triplet in the
    // array arr[] which sums to x. Otherwise false
    bool find3Numbers(int arr[], int n, int x) {
        // Your Code Here
        //solve it using binary search 
        // two pointer approach
        for(int i=0;i<n-2;i++){
            int curr=x-arr[i];
            unordered_set<int>st;
            for(int j=i+1;j<n;j++){
                int req=curr-arr[j];
                if(st.find(req)!=st.end()){
                    return 1;
                }
                st.insert(arr[j]);
            }
        }
        return 0;
        
    }
};
