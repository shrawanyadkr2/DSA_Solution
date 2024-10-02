/*
Link:-
https://leetcode.com/problems/valid-parentheses/description/
*/
class Solution {
public:
    bool isValid(const std::string& s) {
        std::stack<char> st;
        
        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                // Check if the stack is empty before accessing the top
                if (st.empty()) {
                    return false;
                }
                
                char topChar = st.top();
                
                if ((topChar == '(' && ch == ')') ||
                    (topChar == '{' && ch == '}') ||
                    (topChar == '[' && ch == ']')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        
        return st.empty();

        //return true if the "st.empty();" is true other wise false
    }
};
