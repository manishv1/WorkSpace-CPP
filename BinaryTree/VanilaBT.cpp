#include<bits/stdc++.h>
using namespace std;
 

// Vanila Binary Tree Creation 


struct node
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



 node *insert(node *root,int data )
 {      
      if(root == NULL){
        return new node(data);
      }

      if( data < root->data){
        root->lc = insert(root->lc,data);
      }
      else{
        root->rc = insert(root->rc, data);
      }

      return root;
 }

void inorder(node *root){

      if(root == NULL ){

            return;
      }
      inorder(root->lc);
      std::cout << root->data << std::endl;
      inorder(root->rc);
}

void bstLevel(node *root)
{
      queue<node*> q;
      q.push(root);

      while(!q.empty())
      {
         node *f = q.front();
         cout<< f->data<<",";
         q.pop();
         if(f->lc)
            q.push(f->lc);
         if(f->rc)
            q.push(f->rc);  
      }
}
 
int main()
{
   node *root = NULL;
   NULL;
   vector<int> v = {100,60,200,40,75,110,250};

   for (int i = 0; i < v.size(); i++)
   {    
       root =  insert(root,v[i]);
   }   
    //inorder(root);
      bstLevel(root);
    return 0;
}