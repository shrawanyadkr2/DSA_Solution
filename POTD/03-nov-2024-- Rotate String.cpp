
/*
Link:
https://leetcode.com/problems/rotate-string/?envType=daily-question&envId=2024-11-03


 Rotate String


*/

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        string str=s+s;
        if(str.find(goal)!=string::npos){
            return true;
        }
        return false;
    }
};
