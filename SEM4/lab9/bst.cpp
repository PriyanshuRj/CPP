#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};
Node *create(int val)
{
    Node *node = new Node;
    node->data = val;
    node->left = node->right = NULL;
    return node;
}
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(Node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
void preorder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
Node *findMinimum(Node *cur)
{
    while (cur->left != NULL)
    {
        cur = cur->left;
    }
    return cur;
}
Node *insertion(Node *root, int val)
{
    if (root == NULL)
        return create(val);
    if (val < root->data)
        root->left = insertion(root->left, val);
    else
        root->right = insertion(root->right, val);
    return root;
}
void search(Node *&cur, int val, Node *&parent)
{
    while (cur != NULL && cur->data != val)
    {
        parent = cur;
        if (val < cur->data)
            cur = cur->left;
        else
            cur = cur->right;
    }
}
void deletion(Node *&root, int val)
{
    Node *parent = NULL;
    Node *cur = root;
    search(cur, val, parent);
    if (cur == NULL)
        return;
    if (cur->left == NULL && cur->right == NULL)
    {
        if (cur != root)
        {
            if (parent->left == cur)
                parent->left = NULL;
            else
                parent->right = NULL;
        }
        else
            root = NULL;
        free(cur);
    }
    else if (cur->left && cur->right)
    {
        Node *succ = findMinimum(cur->right);
        int val = succ->data;
        deletion(root, succ->data);
        cur->data = val;
    }
    else
    {
        Node *child = (cur->left) ? cur->left : cur->right;
        if (cur != root)
        {
            if (cur == parent->left)
                parent->left = child;
            else
                parent->right = child;
        }
        else
            root = child;
        free(cur);
    }
}
int main()
{
    Node *root = NULL;
    int key_value;
    cout<<"Enter the total no. of nodes in the BST : ";
    cin>>key_value;
    cout << "Enter 5 elements ::::::::::: \n";

    for (int i = 0; i < key_value; i++)
    {
        cout << "Enter the element "<<i<<" : ";
        int key;
        cin >> key;
        root = insertion(root, key);
    }
    cout << "\n";
    cout<<"Inorder traversal : ";
    inorder(root);
    cout<<"\nPostorder Traversal : ";
    postorder(root);
    cout<<"\nPreorder Traversal : ";
    preorder(root);
    cout << "\n";
    cout<<"Enter the value to be deleted from the BST : ";
    int del_num;
    cin>>del_num;
    deletion(root, del_num);
    cout << "\n";
    cout<<"Inorder traversal : ";
    inorder(root);
    cout<<"\nPostorder Traversal : ";
    postorder(root);
    cout<<"\nPreorder Traversal : ";
    preorder(root);
    return 0;
}