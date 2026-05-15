#include<iostream>
using namespace std;
int main ()
{
    int n, m;
    cout << "Enter the size of 1st array:";
    cin>>n;
    cout << "Enter " <<n << " Number of element:";
    int a[n];
    for (int i=0; i<n; i++)
    {
        cin>> a[i];

    }
    cout << "Enter the size of 2nd array:";
    cin>>m;
    cout << "Enter " <<m << " Number of element:";
    int b[m];
    for (int i=0; i<m; i++)
    {
        cin>> b[i];

    }


int c[n+m];

for (int i=0; i<n; i++)
{
    c[i]=a[i];
}
for (int i=0 ; i<m; i++)
{
    c[n+i]=b[i];

}
cout << "Merged array is:";
for (int i=0; i<n+m; i++)
{
    cout << c[i] << " ";

}
return 0;
}
