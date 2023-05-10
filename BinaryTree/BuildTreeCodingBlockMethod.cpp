#include<bits/stdc++.h>
using namespace std;


class node
{
public:
    int data;
    node* left;
    node* right;

    node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// Coding Block method
int idx = 0;
vector<int> v = { 4,5,7,9,-1,-1,10,-1,-1,-1,6,-1,8,11,-1,-1,12,-1,-1 };
node* buildTree()
{
    int data;
    data = v[idx];
    idx++;

    if (data == -1)
        return NULL;

    node* root = new node(data);

    if (idx  < v.size()) {
        root->left = buildTree();
    }
    if (idx  < v.size()) {
        root->right = buildTree();
    }
    return root;
}


// build tree from an array 

node *CreateTree(vector<int> arr, int s , int e)
{
    if( s > e) return NULL;

    int mid = (s+e)/2;
    node *root = new node(arr[mid]);
    root->left = CreateTree(arr,s,mid-1);
    root->right = CreateTree(arr,mid+1, e);

    return root;

}

void levelOederTraversal(vector<int> &result, node* root)
{
    queue <node*>q;
    if (root == NULL) return;
    q.push(root);

    while (!q.empty()) {

        node* cur = q.front();
        q.pop();
        //cout << cur->data << "  ";
        result.push_back(cur->data);

        if (cur->left != NULL)
            q.push(cur->left);
        if (cur->right != NULL)
            q.push(cur->right);
    }
}


void levelOederTraversal1(vector<int> &result, node* root)
{
    queue <node*>q;
    int size;
    if (root == NULL) return;
    q.push(root);
    

    while (!q.empty()) {
        size = q.size();
        while(size > 0)
        {
            node* cur = q.front();
            q.pop();
    //        cout << cur->data << "  ";
            result.push_back(cur->data);

            if (cur->left != NULL)
                q.push(cur->left);
            if (cur->right != NULL)
                q.push(cur->right);
                --size;
        }
        result.push_back(-1);
       
    }
}
void inorder(node *root)
{
    if(root == NULL)
    return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
 
int main()
{
   
    vector<int> res;
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    //node* root = buildTree();
    node *root = CreateTree(arr,0,arr.size()-1);
    // inorder(root);


     levelOederTraversal1(res, root);
     for (size_t i = 0; i < res.size(); i++)
     {
         if(res[i] == -1)
           cout<<endl;          
         else
           cout << res[i] << " ";
     }


    return 1;
}




