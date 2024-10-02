
/*
Link:-
https://www.geeksforgeeks.org/problems/postfix-to-infix-conversion/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=postfix-to-prefix-conversion


*/
class Solution {
  public:
    string postToInfix(string exp) {
        // Write your code here
        //here we should make the stack of string type
        //reseons : if return the top element then the top element should be string not a charactor
        stack<string>ans;
        int n=exp.size();
        int i=0;
        while(i<n){
              if ((exp[i] >= 'A' && exp[i] <= 'Z') ||
                (exp[i] >= 'a' && exp[i] <= 'z') ||
                (exp[i] >= '0' && exp[i] <= '9')) {
                // Push the operand to the stack as a string
                ans.push(string(1, exp[i]));
            }
            else{
                string t1=ans.top();
                ans.pop();
                string t2=ans.top();
                ans.pop();
                
                string cons='('+t2+exp[i]+t1+')';
                ans.push(cons);
                
            }i++;
        }
        return ans.top();
        
    }
};
