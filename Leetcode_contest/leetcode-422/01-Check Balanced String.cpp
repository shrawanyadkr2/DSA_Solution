
/*
Link:-
https://leetcode.com/contest/weekly-contest-422/problems/check-balanced-string/

prob:
Check Balanced String


*/

class Solution {
public:
    bool isBalanced(string num) {
        
        int n=num.size();
        int even_sum=0;
        int odd_sum=0;
        
        for(int i=0;i<n;i++){
            if(i%2==0){
                even_sum+=(num[i]-'0');
            }
            else{
                odd_sum+=(num[i]-'0');
            }
        }
    return even_sum==odd_sum;
        
    }
};
