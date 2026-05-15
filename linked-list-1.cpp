#include<iostream>
using namespace std;
class Node {

public:
    int data;
    Node *next;


    Node (int value)
    {
        data=value;
        next=NULL;

    }
};

    void display ( Node*head)
    {
        Node*temp=head;
        while (temp!= NULL)
        {
            cout << temp->data << " ";
            temp=temp->next;
        }
    }
    int main ()
    {
        Node *head =new Node (10);
        Node *second=new Node (15);
        Node *third =new Node (20);

        head->next= second ;
        second->next= third;

        cout << "Linked list is:";
        display(head);
        return 0;


    }





