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

̥vector<int> v = { 1,2,3,4,5,6,7};


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



node* CreateTree1(int s , int e)̥
{
    if( s > e)
    {
        return NULL;
    }
    node *root = NULL;
    int mid = (s+e)/2;
    root = new node(v[mid]);
    root->lc = CreateTree1(s, mid -1);
    root->rc = CreateTree1(mid+1,e);
    return root;̥
}

void levelTraversal(node *root)̥
{
   queue<node *> q; 
   q.push(root);
   while(!q.empty())
   {
        node *tmp = q.front();
        q.pop();
        cout<<"  "<<tmp->data;
        if(tmp->lc!= NULL )
            q.push(tmp->lc);

        if(tmp->rc != NULL)
            q.push(tmp->rc);
   }

   std::cout << endl << endl << std::endl; ̥
   }
 
int main()
{
    
  int s,e;
    s = 0,
    e = v.size()-1;
    node *root = NULL;
    root = CreateTree(root,0,0);
    levelTraversal(root);
    cout<<endl<<endl;
    root = CreateTree1(s,e);    
    levelTraversal(root);
    return 0;
}