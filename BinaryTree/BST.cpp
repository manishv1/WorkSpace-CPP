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
 
int main()
{

    node *root;

    root = insert(root,500);
    root = insert(root,400);
    root = insert(root,1000);
    root = insert(root,300);
    root = insert(root,450);
    root = insert(root,600);
    root = insert(root,1200);
 
//    inorder(root);
    levelTraversal(root);
    return 0;
}