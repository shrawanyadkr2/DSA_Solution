

/*
Link:-
https://leetcode.com/problems/power-of-two/
*/
class Solution {
public:
    bool isPowerOfTwo(int n) {
        // Ensure n is greater than 0, as powers of two are positive
        return n > 0 && (n & (n - 1)) == 0;
    }
};
