// C++ program to print BST in given range
#include <bits/stdc++.h>
using namespace std;
  
// Node of Binary Search Tree
class Node {
public:
    Node* left;
    int data;
    Node* right;
  
    Node(int d)
    {
        data = d;
        left = right = NULL;
    }
};
  
// A function that constructs Balanced
// Binary Search Tree from a vector
Node* createBST(vector<int> v, int start, 
                int end)
{
    sort(v.begin(), v.end());
  
    // Base Case
    if (start > end)
        return NULL;
  
    // Get the middle element and make it root
    int mid = (start + end) / 2;
    Node* root = new Node(v[mid]);
  
    // Recursively construct the left subtree
    // and make it left child of root
    root->left = createBST(v, start, mid - 1);
  
    // Recursively construct the right subtree
    // and make it right child of root
    root->right = createBST(v, mid + 1, end);
  
    return root;
}


//  Create  BST Tree inserting nodes in level order 

Node *insertLevelOrder(vector<int> v,int idx )
{
        int size = v.size();
        if( idx >= size)
        {
            return NULL;
        }
        
            Node *root = new Node(v[idx]);
            root->left = insertLevelOrder(v, 2*idx+1);
            root->right = insertLevelOrder(v, 2*idx+2);
        
    return root;

}
vector<int> inNode,preNode, vec;

  
// A utility function to print
// preorder traversal of BST
vector<int> preOrder(Node* node)
{
    // Root Left Right
    if (node == NULL) {
        return vec;
    }
    preNode.push_back(node->data);
    preOrder(node->left);
    preOrder(node->right);
    return preNode;
}


// A utility function to print
// inorder traversal of BST
vector<int> inOrder(Node* node)
{
    // Root Left Right
    if (node == NULL) {
        return vec;
    }
    inOrder(node->left);
    inNode.push_back(node->data);
    inOrder(node->right);
    return inNode;
}


// Driver Code
int main()
{
    vector<int> v = { 1,2,3,4,5};
    //Node* root = createBST(v, 0, v.size() - 1);
    Node* root = insertLevelOrder(v, 0);
    vector<int> ans = inOrder(root);
    for (auto i : ans) {
        cout << i << " ";
    }
    return 0;
}