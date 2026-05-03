#include <iostream>
using namespace std;

void insertion(int n, int *arr){
    
    int key;
    for (int i=1;i<n;i++){
        key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    //print sorted array
    for(int i=0;i<n;i++)
        cout<<arr[i];
}

int main(){
    int n; int arr[5];
    cout<<"Enter no of elements in array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<"th element: ";
        cin>>arr[i];
    }
    insertion(n,arr);
    return 0;
}