
/*
Lowest Common Ancestor in a BST

Link:
https://www.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-bst/1

prob:-
Given a Binary Search Tree (with all values unique) and two node values n1 and n2 (n1!=n2). Find the Lowest Common Ancestors of the two nodes in the BST.



*/

class Solution{
    public:
        Node* LCA(Node *root, int n1, int n2)
        {
            // code here
            if(root==nullptr) return nullptr;
            int curr=root->data;
            if(curr>n1 && curr>n2){
               return LCA(root->left,n1,n2);
            }
            if(curr<n1 && curr<n2){
               return LCA(root->right,n1,n2);
            }
            return root;
        }

};
