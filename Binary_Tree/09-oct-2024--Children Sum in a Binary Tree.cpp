
/*
Children Sum in a Binary Tree
link:-
https://www.geeksforgeeks.org/problems/children-sum-parent/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=hildren-sum-parent


prob:-
Given a binary tree having n nodes. Check whether all of its nodes have the value equal to the sum of their child nodes. Return 1 if all the nodes in the tree satisfy the given properties, else it return 0.

For every node, data value must be equal to the sum of data values in left and right children. Consider data value as 0 for NULL child.  Also, leaves are considered to follow the property.

*/
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){80
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
public:
    // Function to check whether all nodes of a tree have the value 
    // equal to the sum of their child nodes.
    int isSumProperty(Node* root) {
        // Base case: if the node is null, return true
        if (root == nullptr) return 1;

        // If it's a leaf node, return true
        if (root->left == nullptr && root->right == nullptr) return 1;

        // Calculate the sum of the child nodes
        int childSum = 0;
        if (root->left) childSum += root->left->data;
        if (root->right) childSum += root->right->data;

        // Check the sum property for the current node
        if (childSum == root->data) {
            // Recursively check for left and right subtrees
            return isSumProperty(root->left) && isSumProperty(root->right);
        } else {
            return 0; // Return false if the sum property is violated
        }
    }
};
