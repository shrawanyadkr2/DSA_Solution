
// Introduction to Trees


/*

problem statement:-
                     Given an integer i. Print the maximum number of nodes on level i of a binary tree.
link:-

https://www.geeksforgeeks.org/problems/introduction-to-trees/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=introduction-to-trees

*/

class Solution {
  public:
    int countNodes(int i) {
        // your code here
        return pow(2,i-1);
    }
};
