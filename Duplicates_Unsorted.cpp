#include <iostream>
using namespace std;
void duplicatesUnsorted(int a[], int n)
{
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(a[i]==a[j])
            {
                cout<<a[i]<<" ";
                break;
            }
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
    duplicatesUnsorted(arr,n);
}