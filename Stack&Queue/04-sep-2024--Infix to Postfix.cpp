/*Link:-
https://www.geeksforgeeks.org/problems/infix-to-postfix-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=infix-to-postfix
*/

class Solution {
  public:
  
   int prec(char ch) {
        if (ch == '^') return 3;
        if (ch == '*' || ch == '/') return 2;
        if (ch == '+' || ch == '-') return 1;
        return -1; 
   }
    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s) {
        
       
        
        
          // Your code here
        string ans="";
        std::stack<char>st;
        for(char ch:s){
            if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' &&  ch<='9')) {
                ans=ans+ch;
            }
            else if(ch=='('){
                st.push(ch);
            }
            else if(ch==')'){
                while(!st.empty() && st.top()!='('){
                    ans=ans+st.top();
                    st.pop();
                }
                st.pop();
                
            }
            else{
                while(!st.empty() && prec(ch)<=prec(st.top())){
                    ans=ans+st.top();
                    st.pop();
                }
                st.push(ch);
            }
            // st.pop();
            }
        while(!st.empty()){
            ans=ans+st.top();
            st.pop();
            
        }
        return ans;
    

    
    
    }
};
