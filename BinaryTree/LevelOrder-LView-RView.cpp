#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
//  Create  BST Tree inserting nodes in level order

Node *insertLevelOrder(vector<int> v, int idx)
{
    int size = v.size();
    if (idx >= size)
    {
        return NULL;
    }

    Node *root = new Node(v[idx]);
    root->left = insertLevelOrder(v, 2 * idx + 1);
    root->right = insertLevelOrder(v, 2 * idx + 2);

    return root;
}
vector<int> inNode, preNode, vec;

// A utility function to print
// inorder traversal of BST
// A utility function to print
// preorder traversal of BST
void preOrder(Node *node)
{
    // Root Left Right
    if (node == NULL)
    {
        return;
    }
    cout << node->data << " , ";
    preOrder(node->left);
    preOrder(node->right);
    return;
}

// A utility function to print
// inorder traversal of BST
vector<int> inOrder(Node *node)

{
    // Root Left Right
    if (node == NULL)
    {
        return vec;
    }
    inOrder(node->left);
    inNode.push_back(node->data);
    inOrder(node->right);
    return inNode;
}
//  Modified Coding block code
void printLevelByLevel(Node *root)
{
    queue<Node *> q;
    q.push(root);

    int level = 0;
    while (!q.empty())
    {
        int size = q.size();
        std::cout << endl;
        std::cout << "Level" << ++level << " :";

        while (size > 0)
        {
            Node *f = q.front();
            std::cout << f->data << ", ";
            if (f->left)
                q.push(f->left);
            if (f->right)
                q.push(f->right);
            q.pop();
            --size;
        }
    }
}
// Coding Block Code :pritn level order line by line  
void LevelOrderTraversal1(Node *root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(q.size() > 1)
    {
        Node *n = q.front();
        q.pop();
        if( n == NULL) 
        {
            q.push(NULL);
            cout<<endl;
        }
        else 
        {
            cout<< n->data<<"  ";
            if(n->left)
                q.push(n->left);
            
            if(n->right)
                q.push(n->right);
                
        }
    }
}
 
 
// print node at nth level
void print_Nth_Level(Node *root, int n)
{
    queue<Node *> q;
    q.push(root);
    int level = 0;
    while (!q.empty())
    {
        ++level;
        int size = q.size();
        while (size > 0)
        {
            Node *f = q.front();
            if(level == n)
                std::cout << f->data << ", ";
            if (f->left)
                q.push(f->left);
            if (f->right)
                q.push(f->right);
            q.pop();
            --size;
        }
    }
}

    
// print left view of tree
void printRightView(Node *root)
{
    queue<Node *> q;
    q.push(root);
    int level = 0;
    while (!q.empty())
    {
        ++level;
        int size = q.size();
        while (size > 0)
        {
            Node *f = q.front();
            if(size == 1)
                std::cout << f->data << ", ";
            if (f->left)
                q.push(f->left);
            if (f->right)
                q.push(f->right);
            q.pop();
            --size;
        }
    }
}
 // print left view of tree
void printLeftView(Node *root)
{
    queue<Node *> q;
    q.push(root);
    int level = 0;
    while (!q.empty())
    {
        ++level;
        int size = q.size();
        int maxsize = size;
        while (size > 0)
        {
            Node *f = q.front();
            if(size == maxsize)
                std::cout << f->data << ", ";
            if (f->left)
                q.push(f->left);
            if (f->right)
                q.push(f->right);
            q.pop();
            --size;
        }
    }
}


    int main()
    {

        vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
        // Node* root = createBST(v, 0, v.size() - 1);
        Node *root = insertLevelOrder(v, 0);
        LevelOrderTraversal1(root);
        cout<<endl<<endl;
     //   printLeftView(root);
        //print_Nth_Level(root,3);
        // preOrder(root);
        return 0;
    }