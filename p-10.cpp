#include<iostream>
using namespace std;
class Node {
    public:
 int data;
 Node* next;

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
        cout <<temp->data << " ->";
        temp=temp->next;


    }
    cout << "NULL";
}

int main ()
{
    Node*head=new Node (10);
    Node*second =new Node (15);
    Node *third=new Node (25);

    head->next=second;
    second->next=third;
    third->next=NULL;

  cout << "Existing linked list is:";
  display (head);
  cout <<endl;



   second->next=NULL;
   delete third;


    cout << "updated linked list is:";
  display (head);
  cout <<endl;
  return 0;



}
