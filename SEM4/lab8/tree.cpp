#include <bits/stdc++.h>
using namespace std;
struct Node
{
    struct Node *right;
    struct Node *left;
    int data;
};

struct Node *create_tree(struct Node *tree, int *arr, int arr_len)
{
    struct Node **array = (struct Node **)malloc(sizeof(struct Node *) * arr_len);
    for (int i = 0; i < arr_len; i++)
    {
        array[i] = new struct Node;
        array[i]->data = arr[i];
        array[i]->right = NULL;
        array[i]->left = NULL;
    }
    for (int i = 0; i < arr_len; i++)
    {
        if (array[i]->data != -1)
        {
            if ((i * 2 + 1) < arr_len && array[i * 2 + 1]->data != -1)
            {
                array[i]->left = array[i * 2 + 1];
            }
            if ((i * 2 + 2) < arr_len && array[i * 2 + 2]->data != -1)
            {
                array[i]->right = array[i * 2 + 2];
            }
        }
    }
    return array[0];
}
void traversal_preorder(struct Node *tree)
{
    if (tree)
        cout << tree->data << " ";
    else
        return;
    if(tree->left) traversal_preorder(tree->left);
    if(tree->right) traversal_preorder(tree->right);
}
void traversal_postorder(struct Node *tree)
{
    if (tree)
    {
        if(tree->left) traversal_postorder(tree->left);
        if(tree->right) traversal_postorder(tree->right);
        if (tree)
            cout << tree->data << " ";
        else
            return;
    }
    else return;
}
void traversal_inorder(struct Node *tree)
{
    if (tree)
    {
        if(tree->left) traversal_inorder(tree->left);
        if (tree)
            cout << tree->data << " ";
        else
            return;
        if(tree->right) traversal_inorder(tree->right);
    }
    else
        return;
}
int main()
{
    cout<<"Enter the no of nodes in tree : ";
    int num = 0;
    cin>>num;

    int *arr = new int[num];
    for (int i = 0; i < num; i++){
        cout<<"Enter the data for tha Node "<<i<<" : ";
        cin>>arr[i];

    }
    struct Node *tree = new Node;
    tree = create_tree(tree, arr, 10);
    cout << "Pre order traversal ------>" << endl;
    traversal_preorder(tree);
    cout << endl
         << endl;
    cout << "Post order traversal ------>" << endl;
    traversal_postorder(tree);
    cout << endl
         << endl;
    cout << "In order traversal ------>" << endl;
    traversal_inorder(tree);
    cout << endl
         << endl;

    return 0;
}