
/*
Link:
https://leetcode.com/problems/rotate-string/?envType=daily-question&envId=2024-11-03


 Rotate String


*/

class Solution {
public:
    bool rotateString(string s, string goal) {
       // It can be implimented by q
      /* lets take example is :-  s = "abcde", goal = "cdeab"

       |        |   |   e    |
       |        |   |   d    |
       |        |   |   c    |   let k=goal.size()-1
       |    e   |   |   b    |   while(k<=0){
       |    d   |   |   a    |       q2.front();
       |    c   |   |   \e   |       q2.pop();
       |    b   |   |   \d   |       if(q1==q2) return true
       |    a   |   |   \c   |       else false
       |________|   |________|

    */
    queue<char>q1;
    queue<char>q2;

    for(auto ch:s){
        q1.push(ch);
    }
    for(auto ch :goal){
        q2.push(ch);
    }

    int k=goal.size()-1;
    while(k>=0){
        if(q1==q2) return true;
        else{
            char temp=q2.front();
            q2.pop();
            q2.push(temp);
        }
        k--;
    }
    return false;

    }
};
