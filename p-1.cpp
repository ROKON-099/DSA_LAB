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
    int key ;
    cout << "Enter the element:";
    cin>>key;
    bool found =false ;
    int index=-1;


    for (int i=0; i<n; i++)
    {
      if (  arr[i] == key)
      {
          found =true ;
          index=i;
          break;

      }



    }
    if (!found)
    {
        cout << "Not found:";

    }
    else {
        cout << "found at index"<<index;

    }
    return 0;
}
