

/*

prob:-
You have been given a Binary Tree of 'N'
nodes, where the nodes have integer values.
Your task is to return the ln-Order, Pre-Order, and Post-Order traversals of the given binary tree.


Link:-
https://www.naukri.com/code360/problems/tree-traversal_981269?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
*/

/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void inorder_ans(TreeNode* root, vector<int>& ans1) {
    if (root == nullptr) {
        return;
    }
    
    inorder_ans(root->left, ans1);  // Visit left
    ans1.push_back(root->data);      // Visit root
    inorder_ans(root->right, ans1); // Visit right
}

// Preorder Traversal
void preorder_ans(TreeNode* root, vector<int>& ans2) {
    if (root == nullptr) {
        return;
    }
    
    ans2.push_back(root->data);      // Visit root
    preorder_ans(root->left, ans2);  // Visit left
    preorder_ans(root->right, ans2); // Visit right
}

// Postorder Traversal
void postorder_ans(TreeNode* root, vector<int>& ans3) {
    if (root == nullptr) {
        return;
    }

    postorder_ans(root->left, ans3);  // Visit left
    postorder_ans(root->right, ans3); // Visit right
    ans3.push_back(root->data);        // Visit root
}

// Function to get all tree traversals
vector<vector<int>> getTreeTraversal(TreeNode *root) {
    vector<int> ans1; // For inorder
    vector<int> ans2; // For preorder
    vector<int> ans3; // For postorder

    inorder_ans(root, ans1);       // Fill inorder result
    preorder_ans(root, ans2);      // Fill preorder result
    postorder_ans(root, ans3);     // Fill postorder result

    // Combine results into a single 2D vector
    return {ans1, ans2, ans3};
}
