/*
Link:
https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/?envType=daily-question&envId=2024-11-05

prob:
Minimum Number of Changes to Make Binary String Beautiful

*/

class Solution {
public:
    int minChanges(string s) {
        //scinc the string in already in even length it is not neccesery to add edge cse
        //i am solving the prob using stack
        stack<char>st;
        //there is a counter to keep track missmatched char
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(!st.empty() && s[i]!=st.top()){
                cnt++;
                st.pop();
            }
            else if(!st.empty() && s[i]== st.top()){
                st.pop();
            }
        }
        return cnt;
    }
};
