/*


Link:-
https://www.geeksforgeeks.org/problems/prefix-to-infix-conversion/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=prefix-to-infix-conversion

*/

class Solution {
  public:
    string preToInfix(string pre_exp) {
        // Stack to store intermediate results
        stack<string> ans;
        int n = pre_exp.size();

        // Traverse the prefix expression from right to left
        for (int i = n - 1; i >= 0; i--) {
            // If the character is an operand (letter or digit)
            if ((pre_exp[i] >= 'A' && pre_exp[i] <= 'Z') ||
                (pre_exp[i] >= 'a' && pre_exp[i] <= 'z') ||
                (pre_exp[i] >= '0' && pre_exp[i] <= '9')) {
                // Push it to the stack as a string
                ans.push(string(1, pre_exp[i]));
            } else {
                // It's an operator; pop two operands from the stack
                if (ans.size() < 2) {
                    // Handle error if there are fewer than two operands
                    return "Invalid prefix expression";
                }
                
                string t1 = ans.top();
                ans.pop();
                string t2 = ans.top();
                ans.pop();

                // Form the infix expression with parentheses
                string cons = '(' + t1 + pre_exp[i] + t2 + ')';

                // Push the result back to the stack
                ans.push(cons);
            }
        }

        // The final result will be the top of the stack
        return ans.top();
    }
};

     
