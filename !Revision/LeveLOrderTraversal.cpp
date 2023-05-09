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


void LevelOrderTraversal(node *root)
{
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        node *n = q.front();
        cout<< n->data<<"  ";
        if(n->lc != NULL)
            q.push(n->lc);
        
        if(n->rc!= NULL)
            q.push(n->rc);

        q.pop();            
    }
}
// pritn level order line by line  
 void LevelOrderTraversal1(node *root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node *n = q.front();
        q.pop();
        if( n == NULL) 
        {
            q.push(NULL);
            cout<<endl;
        }
        else 
        {
            cout<< n->data<<"  ";
            if(n->lc != NULL)
                q.push(n->lc);
            
            if(n->rc!= NULL)
                q.push(n->rc);
                
        }
}
 
 
int main()
{
    
 
 
 
    return 0;
}