


/*
Link:-
https://www.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not-1587115620/1

*/
class Solution {
  public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k) {
        // Your code here
      

    string res = "";
    
    while (n > 0) {
        if (n % 2 == 1) res += '1';
        else res += '0';
        n= n / 2;
    }
    
    // Print the result in reverse order
    for (int i = res.size() - 1; i >= 0; i--) {
        if(res[k]=='1') return true;
        else return false;
    }
   
        
    }
};
