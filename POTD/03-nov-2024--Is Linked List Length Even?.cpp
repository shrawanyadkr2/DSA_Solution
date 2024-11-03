/*
Link:

https://www.geeksforgeeks.org/problems/linked-list-length-even-or-odd/1


Is Linked List Length Even?





*/ 


/*structure of a node of the linked list is as


struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
class Solution {
  public:
    bool isLengthEven(struct Node **head) {
        // Code here
      int cnt = 0;
        Node* temp = *head;  // Add missing semicolon here
        while (temp != nullptr) {
            cnt++;
            temp = temp->next;
        }
        return (cnt % 2 == 0);
    }
};

