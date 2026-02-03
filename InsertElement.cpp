#include <iostream> 
using namespace std;
void addElement(int arr[],int n, int element, int pos)
{
    int newarr[n+1];
    for(int i=0;i<pos-1;i++)
        newarr[i]=arr[i];  
    newarr[pos-1]=element;
    for(int i=pos;i<n+1;i++)
        newarr[i]=arr[i-1];
    cout<<"Updated array = "<<endl;
    for(int i=0;i<n+1;i++)
        cout<<newarr[i]<<" ";
}
int main()
{
    int n,element,pos; int arr[10];
    cout<<"Enter no of elements in array: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element no. "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"Enter element to add and position: ";
    cin>>element>>pos;
    addElement(arr,n,element,pos);
    return 0;
}