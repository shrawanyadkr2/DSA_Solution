
/*
Link:-
https://www.geeksforgeeks.org/problems/postfix-to-prefix-conversion/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=postfix-to-prefix-conversion
*/
class Solution {
  public:
    string postToPre(string post_exp) {
        // Write your code here
        
        //again here we should take the stack of string type
        stack<string>ans;
        int n=post_exp.size();
        int i=0;
        while(i<n){
            if((post_exp[i]>='A' && post_exp[i]<='Z') ||
               (post_exp[i]>='A' && post_exp[i]<='Z') ||
               (post_exp[i]>='A' && post_exp[i]<='Z') 
                ){
                ans.push(1,post_exp[i]);
                }
            else{
                string 
            }
                
        }
        
    }
};
