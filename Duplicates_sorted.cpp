#include <iostream>
using namespace std;
void duplicatesSorted(int a[], int n)
{
    for(int i=1;i<n;i++)
        if(a[i]==a[i-1])
            cout<<a[i]<<" ";
}
int main()
{
    int n; int arr[10];
    cout<<"Enter no of elements in array: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element no. "<<i+1<<": ";
        cin>>arr[i];
    }
    duplicatesSorted(arr,n);
}