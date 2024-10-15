
/*
Link:
https://www.geeksforgeeks.org/problems/find-k-th-smallest-element-in-bst/1

prob:
Given a BST and an integer K. Find the Kth Smallest element in the BST using O(1) extra space. 


*/


struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  
  private:
  void inorder(Node* root,vector<int>&ans){
      if(root==nullptr) return ;
      inorder(root->left,ans);
      ans.push_back(root->data);
      inorder(root->right,ans);
      
  }
  public:
    // Return the Kth smallest element in the given BST
    int KthSmallestElement(Node *root, int K) {
        // add code here.
        vector<int>ans;
        inorder(root,ans);
        if(ans.size()<K) return -1;
         return ans[K-1];
         
    }
};
