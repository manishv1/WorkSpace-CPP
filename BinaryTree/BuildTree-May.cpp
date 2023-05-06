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

vector<int> v = { 1,2,3,4,5,6,7};


node* CreateTree(node *root, int s , int e)
{
    if( s > e)
    {
        return NULL;
    }
    int mid = (s+e)/2;
    root = new node(v[mid]);
    root->lc = CreateTree(root,s, mid -1);
    root->rc = CreateTree(root,mid+1,e);
    return root;
}

 
int main()
{
    
 
 
 
    return 0;
}