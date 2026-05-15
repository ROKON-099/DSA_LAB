#include<iostream>
using namespace std;
int stack[5];
int top=-1;

void push (int value)
{
    top++;
    stack[top]=value;
}
int main ()
{
    push(10);
    push (15);
    push (20);
    push(30);
    push(40);

    for (int i=top ; i>=0 ; i--)
    {
        cout << stack[i] <<endl;

    }
    return 0;


}
