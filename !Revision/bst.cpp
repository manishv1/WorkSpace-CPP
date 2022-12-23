
#include<bits/stdc++.h>
using namespace std;
 
class Node
{
    public:
        int data;
        Node *left;
        Node *right;
   
        Node(int data){
            this->data = data;
            left = NULL;
            right = NULL;
        }    
};
 
 vector<int> v = {100,101,201,301,401};

 Node *buildTree(Node *root,int data)
 {

        if(root == NULL)
        {
            root = new Node(data);
            std::cout << "inserted  :" << data<<std::endl;
            return root;
        }
        else if (root->left == NULL)
        {
                    root->left = buildTree(root->left,data);
                    
        }
        else if(root->right == NULL){
                root->right = buildTree(root->right,data);
                return root;
        }
        return root;
        
        
 }


 void printInOrder(Node *root)
 {
   
      if(root == NULL )
      return;
      
      printInOrder(root->left);
      std::cout << root->data << std::endl;
      printInOrder(root->right);

 }

int main()
{
    Node *root = NULL;
    root = buildTree(root,1);
    root = buildTree(root,2);
    root = buildTree(root,3);
    root = buildTree(root,4);
    printInOrder(root);
    return 0;
}