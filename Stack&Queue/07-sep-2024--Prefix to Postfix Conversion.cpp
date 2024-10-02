/*
Link:-


https://www.geeksforgeeks.org/problems/prefix-to-postfix-conversion/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=prefix-to-postfix-conversion


*/
class Solution {
  public:
    string preToPost(string pre_exp) {
        
        stack<string>ans;
        int n=pre_exp.size();
        int i=n-1;
        while(i>=0){
            if((pre_exp[i]>='A' && pre_exp[i]<='Z')||
               (pre_exp[i]>='a' && pre_exp[i]<='z')||
               (pre_exp[i]>='0' && pre_exp[i]<='9')
                
                )
                {
                    ans.push(string(1,pre_exp[i]));
                }
                else{
                    string t1=ans.top();
                    ans.pop();
                    string t2=ans.top();
                    ans.pop();
                    
                    string cons=t1+t2+pre_exp[i];
                    
                    ans.push(cons);
                }
                i--;
        }
        return ans.top();
        
    }
};
