

/* optimal solution 
Link:-
  https://www.geeksforgeeks.org/problems/set-kth-bit3724/1

*/
class Solution
{
public:
    int setKthBit(int N, int K)
    {
        // Write Your Code here
        return N|(1<<K);
    }
    
};
