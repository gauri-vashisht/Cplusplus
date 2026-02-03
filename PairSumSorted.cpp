#include <iostream>
using namespace std;
void pairSumSorted(int a[], int n, int k)
{
    int i=0,j=n-1;
    while(i<j)
    {
        if(a[i]+a[j]==k)
        {
            cout<<a[i]<<" "<<a[j];
            return;
        }
        else if(a[i]+a[j]<k)
            i++;
        else
            j--;
    }
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
    pairSumSorted(arr,n,k);
}