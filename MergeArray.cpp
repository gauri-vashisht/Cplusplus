#include <iostream>
using namespace std;
void mergeArrays(int a[], int n, int b[], int m, int c[])
{
    for(int i=0;i<n;i++)
        c[i]=a[i];
    for(int i=0;i<m;i++)
        c[i+n]=b[i];
    for(int i=0;i<n+m;i++)
        cout<<c[i]<<" ";
}
int main()
{
    int n,a[10],m,b[10],c[10];
    cout<<"Enter no of elements in array1: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element no. "<<i+1<<": ";
        cin>>a[i];
    }
    cout<<"Enter no of elements in array2: ";
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cout<<"Enter element no. "<<i+1<<": ";
        cin>>b[i];
    }
    mergeArrays(a,n,b,m,c);
}