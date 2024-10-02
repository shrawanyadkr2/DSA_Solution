/*
link:-
https://www.geeksforgeeks.org/problems/smallest-number-on-left3403/1


Smallest number on left


*/
class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
        // code herefor
        vector<int >ans(n,-1);
            for(int i=0;i<n;i++){
                for(int j=i-1;j>=0;j--){
                    if(a[j]<a[i]){
                        ans[i]=a[j];
                        break;
                    }
                }
            }
            
        return ans;
    }
};
