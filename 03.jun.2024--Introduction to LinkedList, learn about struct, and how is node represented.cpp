/*
Link:-

https://www.geeksforgeeks.org/problems/
introduction-to-linked-list/1?utm_source=youtube&utm_medium=
collab_striver_ytdescription&utm_campaign=introduction-to-linked-list

*/
/*class Node {
public:
    int data;
    Node* next;
  
    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }
  
    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};*/

class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        //sbse phile head jo define kro
        Node* head= new Node(arr[0]);
        Node* prev = head;
        for(int i=1;i<arr.size();i++)
        {
            Node* curr= new Node(arr[i]);
            prev->next=curr;
            prev=prev->next;
            
        }
        return head;
    }
};
