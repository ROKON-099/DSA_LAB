#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;

    Node (int value)
    {
        data=value;
        next=NULL;

    }

};

void display (Node *head)
{
    Node*temp=head;
    while (temp!=NULL)
    {
        cout << temp->data <<"->";
        temp=temp->next;
    }
    cout << "NULL";
}
int main ()
{

    Node*head=new Node (10);
    Node *second =new Node (15);
    Node *third =new Node (20);

    head->next=second;
    second->next=third;
    third->next= NULL;

    cout << "existing linked list is:";
    display (head);

// insert a middle ;

    Node*newNode =new Node (25);

    third->next=newNode;



    cout << endl;
    cout << "Update linked list is:";

    display (head);

    return 0;



}
