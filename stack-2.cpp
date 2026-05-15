#include<iostream>
using namespace std;
int main ()
{
    int n;

    cout << "Enter the size of stack:";
    cin>>n;
    cout << "Enter " <<n << " Number of element on stack:";
     int top= n-1;
    int stack [n];

    for (int i=0; i<n; i++)
    {
        cin>>stack[i];

    }
    cout << "stack is:";
    for (int i=top; i>=0; i--)
    {
        cout << stack[i] << " ";

    }
    return 0;

}
