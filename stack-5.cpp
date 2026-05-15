#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout << "Enter the size of stack:";
    cin>>n;
    cout << "Enter " <<n << " Number of element on stack:";
    int stack [n+1];
    int top=-1;

    for (int i=0; i<n; i++)
    {
        cin>>stack[i];
        top++;

    }
    cout << "Existing stack is:";
    for (int i=top ; i>=0; i--)
    {
        cout <<stack[i] <<" ";

    }
    cout <<endl;

    int value ;
    cout << "Enter the value to push:";
    cin>>value;

    top++;
    stack[top]=value;

    cout << "Update stack is:";
    for (int i=top; i>=0; i--)
    {
        cout <<stack[i] <<" ";

    }
    return 0;




}
