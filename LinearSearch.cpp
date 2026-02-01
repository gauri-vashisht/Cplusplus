#include <iostream>
using namespace std;
int LinearSearch(int arr[],int n, int s)
{
    int found;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
            found=i+1;
            return found; break;
        }
    }
    return 404;
}
int main()
{
    int n,found,s; int arr[10];
    cout<<"Enter no of elements in array: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element no. "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"Enter element to search: ";
    cin>>s;
    found = LinearSearch(arr,n,s);
    if (found!=404)
        cout<<"Element was found at position: "<<found;
    else
        cout<<"Element doesnt exist in array";
    return 0;
}