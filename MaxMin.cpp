#include <iostream>
using namespace std;
void MaxMin(int a[],int n,int max,int min)
{
    max=a[0];
    min=a[0];
    for(int i=1;i<n;i++)
    {
        if (a[i]>=max)
            max=a[i];
        if (a[i]<=min)
            min=a[i];
    }
    cout<<"Max = "<<max<<endl;
    cout<<"Min = "<<min<<endl;             
}
int main()
{
    int n,a[10],max,min;
    cout<<"Enter no of elements in array: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element no. "<<i+1<<": ";
        cin>>a[i];
    }
    MaxMin(a,n,max,min);
}