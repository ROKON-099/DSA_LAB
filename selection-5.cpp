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
    for (int i=0; i<n-i; i++)
    {
        int min=i;
        for (int j=i+1; j<n; j++)
        {
            if (arr[j]<arr[min])
            {
                min=j;

            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;

    }
    cout <<endl;
    cout << "sorted array is:";
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

