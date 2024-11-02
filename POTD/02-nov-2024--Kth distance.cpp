
/*
Link:
https://www.geeksforgeeks.org/problems/kth-distance3757/1


Kth distance


*/
class Solution {
  public:

    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
        // your code
       int n=arr.size();
       for(int i=0;i<n;i++){
           int val = arr[i];
           for(int j=i+1; j<=i+k && j<n ;j++){
               if(arr[j]==val){
                   return true;
               }
           }
       }
       return false;
    }
};
