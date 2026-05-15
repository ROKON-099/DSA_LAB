#include<iostream>
using namespace std;
class Node {
public :
    int data;
    Node *next;

    Node (int value)
    {
        data=value;
        next=NULL;
    }
    };
    void Display (Node *head )
    {
        Node*temp=head;
        while (temp!=NULL)
        {
            cout << temp->data << "->";
            temp=temp->next;

        }
        cout <<"NULL";
    }

int main()
{
   Node*head=new Node (10);
   Node*second=new Node (15);
   Node *third=new Node (25);

   head->next=second;
   second->next=third;
   third->next= NULL;
   cout <<"existing linked list is:";
   Display(head);


   // insert beginning
   Node*newNode=new Node (20);
   newNode->next=second;
   head->next=newNode;


   cout << endl;
   cout << "Update linked list is:";
   Display (head);
   return 0;



}






