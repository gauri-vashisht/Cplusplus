#include <iostream>
using namespace std;
void pairSum(int a[], int n, int k)
{
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(a[i]+a[j]==k)
                cout<<a[i]<<" "<<a[j]<<"\n";
}
int main()
{
    int n,k; int arr[10];
    cout<<"Enter no of elements in array: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element no. "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"Enter sum to find: ";
    cin>>k;
    pairSum(arr,n,k);
}