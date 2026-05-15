#include<iostream>
using namespace std;
struct Node {

int data;
Node * left;
Node * right;

Node (int value)
{
    data=value;
    left= NULL;
    right= NULL;

}
};
void inorder (Node *root)
{
    if (root ==NULL)
    return ;

    inorder (root->left);
    cout << root->data << " ";
    inorder (root->right);


}
int main ()
{
    Node*root =new Node (10);
    root->left=new Node(20);
    root->right =new Node (25);
    root->left->left=new Node (30);
    root->left->right =new Node (35);

    cout << "inorder traversal is:";
    inorder(root);




}
