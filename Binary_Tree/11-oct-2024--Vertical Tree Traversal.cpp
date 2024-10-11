
/*
Vertical Tree Traversal

Link:-
https://www.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1



*/
class Solution {
public:
    // Function to find the vertical order traversal of Binary Tree.
   void verticalTree(Node* root,int hd,int level,map<int,map<int,vector<int>>> &ump){
        if(!root)
        return;
        ump[hd][level].push_back(root->data);
        verticalTree(root->left,hd-1,level+1,ump);
        verticalTree(root->right,hd+1,level+1,ump);
    }
    
    vector<int> verticalOrder(Node *root)
    {
        //Your code here
        vector<int> v;
        map<int,map<int,vector<int>>> ump;
        verticalTree(root,0,0,ump);
        for(auto it:ump){
            for(auto itr1:it.second){
                for(auto itr2:itr1.second)
                v.push_back(itr2);
            }
        }
        return v;
    }


};
