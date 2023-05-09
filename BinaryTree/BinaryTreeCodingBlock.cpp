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

 int idx = 0;
vector<int> arr = { 4,5,7,-1,-1,-1,6,-1,8,10,-1,-1,-1};
node* buildTree()
{ 
    int data;
    //cin >> data;
   
    data = arr[idx];
    idx++;
   
    if (data == -1)
        return NULL;

    node *root = new node(data);
    if(idx < arr.size())
    root->lc = buildTree();
    if(idx < arr.size())
    root->rc = buildTree();

    return root;
}

 Node *buildTree()
 {
        int d;
        cin>>d;
        if(d == 0)
        {
            return NULL;
        }

        Node *root = new Node(d);
        root->left = buildTree();
        root->right = buildTree();
        return root;
 }
 
 void print(Node *root)
 {
    if( root == NULL)
    {
       
        return;
    }

    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
 }    

 
 
int main()
{
    Node *root = buildTree();
    print(root); 
    return 0;
}