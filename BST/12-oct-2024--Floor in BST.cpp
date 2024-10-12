/*


Link:-
https://www.geeksforgeeks.org/problems/floor-in-bst/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=floor-in-bst

prob:-
You are given a BST(Binary Search Tree) with n number of nodes and value x. your task is to find the greatest value node of the BST which is smaller than or equal to x.
Note: when x is smaller than the smallest node of BST then returns -1.


*/

class Solution{

public:
    int floor(Node* root, int x) {
        // Code here
        int floorVal=-1;
        while(root){
            if(root->data==x){
                floorVal=root->data;
                return floorVal;
            }
            if(x>root->data){
                floorVal=root->data;
                root=root->right;
            }
            else{
                root=root->left;
            }
        }
        return floorVal;
    }
};
