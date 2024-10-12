/*


Link:-
https://www.geeksforgeeks.org/problems/implementing-ceil-in-bst/1

prob:-
Given a BST and a number X, find Ceil of X.
Note: Ceil(X) is a number that is either equal to X or is immediately greater than X.

If Ceil could not be found, return -1.



*/
// User function Template for C++

// Function to return the ceil of given number in BST.
int findCeil(Node* root, int input) {
    if (root == NULL) return -1;

    // Your code here
    
    int ceilValue=-1;
    while(root!=nullptr){
        if(root->data==input){
            ceilValue=root->data;
            return ceilValue;
        }
        if(input>root->data){
            root=root->right;
        }
        else{
            ceilValue=root->data;
            root=root->left;
        }
    }
    return ceilValue;
}
