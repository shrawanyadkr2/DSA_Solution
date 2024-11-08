/*
Link:
https://www.geeksforgeeks.org/problems/minimum-times-a-has-to-be-repeated-such-that-b-is-a-substring-of-it--170645/1

prob:
Minimum repeat to make substring

*/
class Solution {
  public:
    int minRepeats(string& s1, string& s2) {
        // code here
          
        int cnt = 1;
        string temp = s1;
        while(temp.length() < s2.length()){
            temp += s1;
            cnt++;
        }
      
        if(temp.find(s2) != -1)
         return cnt;
         
         temp += s1;
         if(temp.find(s2) != -1)
          return cnt + 1;
        
        return -1;
    }
};
