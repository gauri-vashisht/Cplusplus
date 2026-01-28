#include <iostream>
using namespace std;
void Union(int a[],int n,int b[],int m,int c[],int d[])
{
    for(int i=0;i<n;i++)
        c[i]=a[i];
    for(int i=0;i<m;i++)
        c[i+n]=b[i];
    cout<<"Union: "<<endl;
    for(int i=0;i<n+m;i++)
        cout<<c[i]<<" ";
    cout<<endl;
}
void Intersection(int a[], int n, int b[], int m, int d[])
{
    int k = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                d[k] = a[i];
                k++;
                break;
            }
        }
    }
    cout<<"Intersection: "<<endl;
    for(int i=0;i<k;i++)
        cout<<d[i]<<" ";
}

int main()
{
    int n,a[10],m,b[10],c[10],d[10];
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
    Union(a,n,b,m,c,d);
    Intersection(a,n,b,m,d);
}
