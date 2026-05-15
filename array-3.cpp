#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout << "Enter the size of array:";
    cin>>n;
    cout << "Enter " <<n << " Number of array:";
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int value , pos;
    cout << "Enter the value:";
    cin>>value;
    cout<< "Enter the position:";
    cin>>pos;

    for (int i=n; i>pos; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=value;
    n++;
    cout << "Updated array is:";
    for (int i=0; i<n ; i++)
    {
        cout << arr[i] << " ";

    }
    return 0;
}
