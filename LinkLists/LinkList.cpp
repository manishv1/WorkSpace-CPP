#include<bits/stdc++.h>
using namespace std;
 

class Node
{
    public:
        int data;
        Node *next;
   
        Node(int data){
            this->data = data;
        }    
};
 
 void insert(Node *&head,int data)
 {

    Node *cur = new Node(data);
    cur->next = head;
    head = cur;   
 }
 

 void print(Node *head)
 {

      while(head != NULL)
      {
        std::cout << "-->" << head->data;
        head = head->next;   
      }

      std::cout << endl << std::endl;
 }

int main()
{
    
    Node *head = NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    print(head);
    return 0;
}