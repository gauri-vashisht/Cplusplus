#include <iostream>
using namespace std;

int BinarySearch(int* arr, int n, int target){
    int mid,high,low;
    high=n-1;low=0;

    while(low<high){
    mid=(high+low)/2;
    
    if (arr[mid]==target)
        return mid;
    else if (arr[mid]<target){
        low=mid+1;
    }
    else if (arr[mid]>target){
        high=mid-1;
    }
    }
}

int main(){
    int arr[10]; int n,target;
    cout<<"Enter no of elements in array: ";
    cin>>n;
    for (int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<"th element: ";
        cin>>arr[i];
    }
    cout<<"Enter target: ";
    cin>>target;
    int pos;
    pos=BinarySearch(arr, n, target);

    if(pos != -1)
        cout<<"Target found at index"<<pos<<endl;
    else
        cout<<"Target not found"<<endl;
    return 0;
}
