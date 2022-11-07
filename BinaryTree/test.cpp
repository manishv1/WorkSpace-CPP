#include<bits/stdc++.h>
using namespace std;
 
class node
{
    public:
        int data;
        node *lc;
        node *rc;
   
        node(int data){
            this->data = data;
            lc = NULL;
            rc = NULL;
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
    int data = v[mid];
    root = new node(data);
    root->lc = CreateTree(root,s, mid -1);
    root->rc = CreateTree(root,mid+1,e);
    return root;
} 
int main()
{
    
 
 
 
    return 0;
}