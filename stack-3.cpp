#include<iostream>
using namespace std;
int main (){

int n;
  cout << "Enter the Size of stack:";
  cin>>n;
  cout << "Push " <<n << " Number of element on stack:";
  int stack [n];
  int top=-1;

  for (int i=0; i<n; i++)
  {
      cin>>stack[i];
      top++;
  }
  cout << "stack is:";
  for (int i=top; i>=0; i--)
  {
      cout <<stack [i] <<" ";

  }
  return 0;




}
