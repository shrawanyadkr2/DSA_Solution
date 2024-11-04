class Solution {
public:
    /*
    link:
    https://leetcode.com/problems/string-compression-iii/?envType=daily-question&envId=2024-11-04


    String Compression III
    
    */


    string compressedString(string word) {
        string ans;
        int n=word.size();
        if(!n) return ans;
        stack<char>st;
        int cnt=1;

        for(int i=0;i<n;i++){
            if(st.empty()){
                st.push(word[i]);
                // cnt++;
            }
            else if(word[i]==st.top()){
                if(cnt==9){
                     ans+=to_string(cnt);
                      ans.push_back(st.top());
                      st.pop();
                      cnt=1;
                      st.push(word[i]);
                }
                else{
                     cnt++;
                }
               
                
            }
            else if(word[i]!=st.top()){
                ans+=to_string(cnt);
                ans.push_back(st.top());
                st.pop();
                cnt=1;
                st.push(word[i]);
            }
        }
        ans+=to_string(cnt);
        ans.push_back(word[n-1]);
        return ans;

         
    }
};
