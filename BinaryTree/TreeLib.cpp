#include<iostream>
#include<vector>
#include <queue>

using namespace std;

class node
{
public:
    int data;
    node* lc;
    node* rc;

    node(int data) {
        this->data = data;
        lc = NULL;
        rc = NULL;
    }
};

//vctor<int> v = { 1,2,3,4,5,6,7,9,10,11,12,13,14,15,16,17 };
vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };


// Create balanced binary tree 
node* CreateTree(node* root, int s, int e)
{
    if (s > e)
    {
        return NULL;
    }
    int mid = (s + e) / 2;
    root = new node(v[mid]);
    root->lc = CreateTree(root, s, mid - 1);
    root->rc = CreateTree(root, mid + 1, e);
    return root;
}



// Create Tree from array 
// -1 indicate null node 

/*
    Algo works like
        -  Read input from user 
        - -1 means NULL 
        -  First create left subtree 
        -  then create right subtree 
*/

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



node* buildTree1()
{
    int data;
    cin >> data;

    if (data == -1)
        return NULL;

    node* root = new node(data);
    root->lc = buildTree();
    root->rc = buildTree();
    return root;
}
void levelTraversal(node* root)
{
    queue<node*> q;
    q.push(root);
    while (!q.empty())
    {
        node* tmp = q.front();
        q.pop();
        cout << "  " << tmp->data;
        if (tmp->lc != NULL)
            q.push(tmp->lc);

        if (tmp->rc != NULL)
            q.push(tmp->rc);
    }

    std::cout << endl << endl << std::endl;
}


void levelTraversal1(node* root)
{
    queue<node*> q;

    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        while (size > 0)
        {
            node* tmp = q.front();
            q.pop();
            cout << "  " << tmp->data;
            if (tmp->lc != NULL)
                q.push(tmp->lc);

            if (tmp->rc != NULL)
                q.push(tmp->rc);
            --size;
        }
        cout << endl;
    }

    std::cout << endl << endl << std::endl;
}

void preorder(node* root)
{
    if (root == NULL) 
        return;      
   
    preorder(root->lc);
    cout << root->data << "\t";
    preorder(root->rc);
 }

// node to root path
bool nodeToRootPath(vector<int> &v,node *root, int node_data)
{
    bool result;
    if (root == NULL) return false;

    if (root->data == node_data) {
        v.push_back(root->data);
        return true;
    }

   result =  nodeToRootPath(v, root->lc, node_data);
   if (result == true) {
       v.push_back(root->data);
       return true;
   }

   result = nodeToRootPath(v, root->rc, node_data);
   if (result == true) {
       v.push_back(root->data);
       return true;
   }
}
// print kth level

void print_K_level_Down(node* root, int k)
{
    if (root == NULL) return;

    if (k == 1)
    {
        cout << root->data << "  ";
    }
    print_K_level_Down(root->lc, k - 1);
    print_K_level_Down(root->rc, k - 1);
}

int main()
{

    //int s, e;
    //vector<int>result;
    //s = 0,
    //    e = v.size() - 1;
    //node* root = NULL;
    //root = CreateTree(root, s, e);
    //levelTraversal(root);
    //cout << endl << endl;
    //root = CreateTree1(s, e);
    //levelTraversal1(root);
    //preorder(root);
    ///*nodeToRootPath(result, root, 10);
    //cout << endl;
    //cout << "node to root path   " <<  endl;
    //for (int i = 0; i < result.size(); ++i)
    //{
    //    cout << result[i] << "  ";
    //}*/
    //cout << endl << endl;
    //print_K_level_Down(root, 3);
    node* root = NULL;
   
    root = buildTree();
    levelTraversal1(root);
    return 0;
}