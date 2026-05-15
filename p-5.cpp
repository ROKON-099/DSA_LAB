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
    cout << "enter a element:";
    cin>>key;
    int low=0;
    int high=n-1;
    int found=-1;
    for (int i=0; i<n; i++)
    {
        int mid=(low+high)/2;

        if (arr[mid] ==key)
        {
            found=mid;
            break;
        }
        else if (arr[mid] <key)
        {
            low=mid+1;

        }
        else {

            high=mid-1;
        }
    }
    if (found==-1)
    {
        cout << "element is not found:";

    }
    else {
        cout << "Element is found at index:" <<found;

    }
    return 0;
}



