/*
link:-
https://www.geeksforgeeks.org/problems/nodes-at-given-distance-in-binary-tree/1

prob:
Nodes at given distance in binary tree

*/

/* A binary Tree node
struct Node
{
    int data;
    struct Node *left, *right;
};
*/
class Solution {
  private:
  
  // Function to map each node to its parent
  void makeParent(Node* root, unordered_map<Node*, Node*>& parent_tracker, Node*& targetNode, int target) {
      queue<Node*> q;
      q.push(root);
      while (!q.empty()) {
          Node* curr = q.front();
          q.pop();
          
          // Identify the target node by value
          if (curr->data == target) {
              targetNode = curr;
          }
          
          // Track the parents of each node
          if (curr->left) {
              parent_tracker[curr->left] = curr;
              q.push(curr->left);
          }
          if (curr->right) {
              parent_tracker[curr->right] = curr;
              q.push(curr->right);
          }
      }
  }
  
  public:
  
  vector<int> KDistanceNodes(Node* root, int target, int k) {
      // Map to track the parent of each node
      unordered_map<Node*, Node*> parent_tracker;
      Node* targetNode = nullptr; // Pointer to the target node
      
      // Build the parent map and locate the target node
      makeParent(root, parent_tracker, targetNode, target);
      
      if (targetNode == nullptr) return {}; // Return empty if target is not found
      
      // Perform BFS starting from the target node
      queue<Node*> q;
      unordered_map<Node*, bool> visited;
      q.push(targetNode);
      visited[targetNode] = true;
      int curr_lvl = 0;
      
      // BFS traversal to find nodes at distance k
      while (!q.empty()) {
          int size = q.size();
          if (curr_lvl == k) break;
          
          for (int i = 0; i < size; i++) {
              Node* current = q.front();
              q.pop();
              
              // Check the left child
              if (current->left && !visited[current->left]) {
                  q.push(current->left);
                  visited[current->left] = true;
              }
              
              // Check the right child
              if (current->right && !visited[current->right]) {
                  q.push(current->right);
                  visited[current->right] = true;
              }
              
              // Check the parent
              if (parent_tracker[current] && !visited[parent_tracker[current]]) {
                  q.push(parent_tracker[current]);
                  visited[parent_tracker[current]] = true;
              }
          }
          curr_lvl++;
      }
      
      // Collect all nodes at level k
      vector<int> ans;
      while (!q.empty()) {
          Node* temp = q.front();
          q.pop();
          ans.push_back(temp->data);
      }
      
      // Sort the result as per problem requirement
    //   sort(ans.begin(), ans.end());
      return ans;
  }
};
