#include <iostream>
using namespace std;

void Selec(int n, int *arr){
    for (int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if (arr[j]<arr[min])
                min=j;
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
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
    Selec(n,arr);
    return 0;
}