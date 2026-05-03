#include <iostream>
using namespace std;

void BubbleSort(int n, int *arr){
    bool swapped = false;
    for (int i=0;i<n-2;i++){
        for (int j=0; j<n-i-2; j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=true;
            }
        }
        if (swapped==false)
            break;
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
    BubbleSort(n,arr);
    return 0;
}