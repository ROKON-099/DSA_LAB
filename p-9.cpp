#include<iostream>
using namespace std;
int main ()
{
    int n, m;
    cout << "Enter the size of 1st array:";
    cin>>n;
    cout << "Enter " <<n << " Number of element:";
    int arr[100];
    for (int i=0; i<n; i++)
    {
        cin>> arr[i];

    }
    int pos,value;
    cout << "Enter the value:";
    cin>>value;
    cout << "enter the pos:";
    cin>>pos;
    for (int i=n; i>=pos ; i--)
    {
        arr[i]=arr[i-1];

    }
    arr[pos-1]=value;
    n++;
     cout << "Array after insertion: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

