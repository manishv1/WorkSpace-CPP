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

void inorder(node * root){

    if(root == NULL)
        return;
    inorder(root->lc);
    std::cout << root->data << std::endl;
    inorder(root->rc);
}
 

node *insert(node *root,int data)
{
    if(root == NULL){
        return root = new node(data);
    }    
    else if (data < root->data)
    {
        root->lc = insert(root->lc,data);   
    }
    else{

        root->rc = insert(root->rc,data);
    }
    return root;

}

void levelTraversal(node *root)
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
}

int itrBT_Height(node *root)
{
    queue<node*> q;
    int height = 0;
    int sz;
    q.push(root);
    while(!q.empty())
    {
        ++height;
        sz = q.size();
        while(sz--)
        {
            //Add childs of node
            node *f = q.front();
            if(f->lc) q.push(f->lc);
            if(f->rc) q.push(f->rc);
            q.pop();
        }

    }
    return height;
}




int height(node *root)
{

    if(root == NULL){
        return 0;  // NULL Tree --> Height 0
    }
    int lc = height(root->lc);
    int rc = height(root->rc);

    return  max(lc,rc)+1;
}
 

node *searchBST(node *root, int data){

     if(root == NULL){
        return NULL;
     }
     if( data == root->data )
     {
        return root;
     }

     if(data < root->data){

        return searchBST(root->lc,data);
     }

     if(data > root->data){

         return searchBST(root->rc,data);
     }
     
    }

int main()
{

    node *root = NULL;

    root = insert(root,500);
    root = insert(root,400);
    root = insert(root,1000);
    root = insert(root,300);
    root = insert(root,450);
    root = insert(root,600);
    root = insert(root,1200);
    root = insert(root,1201);
    root = insert(root,1205);
 
      inorder(root);
//    levelTraversal(root);
      node *t = searchBST(root,450);
      if(t)
      {
        std::cout <<"..."<< t->data << std::endl;

      }  
      else{

        std::cout << "No Data Element" << std::endl;
      }
//    cout<<endl<<"..."<<height(root)<<endl;

    return 0;
}