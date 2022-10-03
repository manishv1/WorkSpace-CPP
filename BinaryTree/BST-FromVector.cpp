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


//https://www.geeksforgeeks.org/binary-search-tree-set-2-delete/
/* Given a non-empty binary search tree, return the node
with minimum key value found in that tree. Note that the
entire tree does not need to be searched. */
class Node* minValueNode(class Node* node)
{
    class Node* current = node;
  
    /* loop down to find the leftmost leaf */
    while (current && current->left != NULL)
        current = current->left;
  
    return current;
}

/* Given a binary search tree and a key, this function
deletes the key and returns the new root */
class Node* deleteNode(class Node* root, int key)
{
    // base case
    if (root == NULL)
        return root;
  
    // If the key to be deleted is 
    // smaller than the root's
    // key, then it lies in left subtree
    if (key < root->data)
        root->left = deleteNode(root->left, key);
  
    // If the key to be deleted is
    // greater than the root's
    // key, then it lies in right subtree
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
  
    // if key is same as root's key, then This is the node
    // to be deleted
    else {
        // node has no child
        if (root->left==NULL and root->right==NULL)
            return NULL;
        
        // node with only one child or no child
        else if (root->left == NULL) {
            class Node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            class Node* temp = root->left;
            free(root);
            return temp;
        }
  
        // node with two children: Get the inorder successor
        // (smallest in the right subtree)
        class Node* temp = minValueNode(root->right);
  
        // Copy the inorder successor's content to this node
        root->data = temp->data;
  
        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// Iterative function to search in the subtree rooted at `curr` and set its parent.
// Note that `curr` and `parent` is passed by reference to the function.
// Copied from  https://www.techiedelight.com/deletion-from-bst/
void searchKey(Node* &curr, int key, Node* &parent)
{
    // traverse the tree and search for the key
    while (curr != nullptr && curr->data != key)
    {
        // update the parent to the current node
        parent = curr;
 
        // if the given key is less than the current node, go to the left subtree;
        // otherwise, go to the right subtree
        if (key < curr->data) {
            curr = curr->left;
        }
        else {
            curr = curr->right;
        }
    }
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
    vector<int> v = { 1,2,13,4,5};
    sort(v.begin(),v.end());
    for (auto i : v) {
        cout << i << " ";
    }
    cout<<endl<<endl;
    Node* root = createBST(v, 0, v.size() - 1);
    //Node* root = insertLevelOrder(v, 0);
    vector<int> ans = inOrder(root);
    for (auto i : ans) {
        cout << i << " ";
    }
    return 0;
}