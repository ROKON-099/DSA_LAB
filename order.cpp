#include<iostream>
using namespace std;
struct Node {

int data;
 Node *left;
 Node *right;

 Node (int value)
 {
     data=value;
    left=NULL;
    right=NULL;

 }

};

void preorder (Node *root)
{
    if (root == NULL)
        return ;
        cout << root->data << " ";
        preorder (root->left);
        preorder (root->right);


}
void postorder (Node *root)
{
    if (root ==NULL)
        return ;
    postorder (root->left);
    postorder (root->right);
    cout << root->data << " ";

}
void inorder (Node *root)
{
    if (root == NULL)
        return ;
    inorder (root->left);
    cout << root->data << " ";
    inorder (root->right);

}
int main ()
{

    Node*root =new Node (10);
   root->left= new Node (15);
   root->right =new Node (20);
   root->left->left= new Node (25);
   root-> left->right=new Node (30);

    cout << "preorder traversal is:";
    preorder(root);
    cout <<endl;
    cout << "postorder traversal is:";
    postorder (root);
    cout <<endl;
    cout << "inorder traversal is:";
    inorder (root);
    return 0;


}
