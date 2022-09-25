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
//  Create  BST Tree inserting nodes in level order 

Node *insertLevelOrder(vector<int> v,int idx )
{
        int size = v.size();
        if( idx >= size)
        {
            return NULL;
        }
        
            Node *root = new Node(v[idx]);
            root->left = insertLevelOrder(v, 2*idx+1);
            root->right = insertLevelOrder(v, 2*idx+2);
        
    return root;

}
vector<int> inNode,preNode, vec;

// A utility function to print
// inorder traversal of BST
// A utility function to print
// preorder traversal of BST
void preOrder(Node* node)
{
    // Root Left Right
    if (node == NULL) {
        return ;
    }
    cout<< node->data<<" , ";
    preOrder(node->left);
    preOrder(node->right);
    return ;
}

// A utility function to print
// inorder traversal of BST
vector<int> inOrder(Node *node)

{
    // Root Left Right
    if (node == NULL) {
        return vec;
    }
    inOrder(node->left);
    inNode.push_back(node->data);
    inOrder(node->right);
    return inNode;
}
 
//  Coding block code  
void printLevelByLevel(Node *root)
{
     queue<Node *> q;
     q.push(root);
     q.push(NULL);

     while(!q.empty())
     {
        Node *f = q.front();
        if( f == NULL)
        {
            cout <<endl;
            q.pop();
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
           cout<< f->data<< ",";
           if(f->left)
            q.push(f->left);
           if(f->right)
            q.push(f->right);
            q.pop();
        }
     }
     
} 
 
int main()
{
    
     vector<int> v = { 1,2,3,4,5};
    //Node* root = createBST(v, 0, v.size() - 1);
    Node* root = insertLevelOrder(v, 0);
    printLevelByLevel(root);
   // preOrder(root);
    return 0;
}