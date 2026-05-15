
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;

    node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void inorder(node* root)
{
    if(root == NULL)
        return;

    inorder(root->left);

    cout << root->data << " ";

    inorder(root->right);
}

void preorder(node* root)
{
    if(root == NULL)
        return;

    cout << root->data << " ";

    preorder(root->left);

    preorder(root->right);
}

void postorder(node* root)
{
    if(root == NULL)
        return;

    postorder(root->left);

    postorder(root->right);

    cout << root->data << " ";
}

int main()
{
    node* root = new node(10);

    root->left = new node(20);
    root->right = new node(30);

    root->left->left = new node(40);
    root->left->right = new node(50);

    cout << "Inorder: ";
    inorder(root);

    cout << endl;

    cout << "Preorder: ";
    preorder(root);

    cout << endl;

    cout << "Postorder: ";
    postorder(root);

    return 0;
}





