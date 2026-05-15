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
int key;
cout << "Enter the element to search :";
cin>>key;
int low=0;
int high=n-1;
int found=-1;

while (low<=high)
{
    int mid=(low+high)/2;
    if (arr[mid]==key)
    {
        found=mid;
        break;

    }
    else if ( arr[mid]<key)
    {
        low=mid+1;
    }
    else
    {
        high=mid-1;

    }

}
if (found==-1)
{
    cout << "Element is not found:";

}
else {
    cout << "element is found:" <<found ;

}
return 0;
}
