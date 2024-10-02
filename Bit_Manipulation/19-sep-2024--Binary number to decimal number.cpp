
/*
Link:-
https://www.geeksforgeeks.org/problems/binary-number-to-decimal-number3525/1
*/
class Solution {
  public:
    int binary_to_decimal(string str) {
        // Code here.int 
        int num=0;
        int p2=1;
        int n=str.size();
        for(int i=n-1;i>=0;i--){
            if(str[i]=='1') num=num+p2; 
            p2=p2*2;
        }
        return num;
    }
};
