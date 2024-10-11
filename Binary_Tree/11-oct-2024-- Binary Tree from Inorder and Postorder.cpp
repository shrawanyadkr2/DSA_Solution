
/*


Link:-
https://www.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1

prob:
Given inorder and postorder traversals of a binary tree(having n nodes) in the arrays inorder[] and postorder[] respectively. The task is to construct a unique binary tree from these traversals and return its root.
Driver code will print the preorder traversal of the constructed tree.


*/
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

class Solution {
    
    private:
    Node* buildTreeHelper(vector<int >&inorder,int is,int ie,
    vector<int >&postorder,int ps,int pe,map<int,int>&mpp){
        
        if(ps>pe || is>ie) return nullptr;
        
        Node* root=new Node( postorder[pe]);
        int rootIndex=mpp[postorder[pe]];
        int leftnums=rootIndex-is;
        
        root->left=buildTreeHelper(inorder,is,rootIndex-1,postorder,ps,ps+leftnums-1,mpp);
        root->right=buildTreeHelper(inorder,rootIndex+1,ie,postorder,ps+leftnums,pe-1,mpp);
        
        return root;
        
    }
  public:

    // Function to return a tree created from postorder and inoreder traversals.
    Node* buildTree(vector<int> inorder, vector<int> postorder) {
        // code here
        //write the funtion 
        if(inorder.size()!=postorder.size()) return nullptr;
        
        map<int,int>mpp;
        for(int i=0;i<inorder.size();i++){
            mpp[inorder[i]]=i;
        }
        return buildTreeHelper(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,mpp);
        
    }
};
