
/*
link:
https://leetcode.com/problems/valid-palindrome/?envType=study-plan-v2&envId=top-interview-150

Valid Palindrome


*/
class Solution {
public:
    bool isPalindrome(string s) {
        //stl to erase all the special symbol including space
        /*
            {
                Input: s = "A man, a plan, a canal: Panama"----|
                Input: s = "AmanaplanacanalPanama"
            }
        
        */
        s.erase(std::remove_if(s.begin(), s.end(),
            [](unsigned char c) { return !std::isalnum(c); }), s.end());
        
        //stl to transform sentence into lowercase letter
        /*
        {
            Input: s = "AmanaplanacanalPanama"
            Input: s = "amanaplanacanalpanama"
        }
        
        */
        transform(s.begin(), s.end(), s.begin(),[](unsigned char c) { return std::tolower(c); });
        int n=s.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            if(s[low]!=s[high]) return false;
            else{
                low++;
                high--;
            }
        }
        return true;
    

        
    }
};
