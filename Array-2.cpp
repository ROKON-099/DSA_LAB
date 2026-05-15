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
   bool found =false ;
   int index=-1;
   int key;
   cout << "Enter the key:";
   cin>>key;


   for (int i=0; i<n; i++)
   {
       if (arr[i]==key )
       {


        index=i;
       found=true ;
       break;
       }
   }
   if (found)
   {
       cout << "Element found at index:" <<index;
   }
   else {
    cout << "Element not found:";

   }
   return 0;
}
