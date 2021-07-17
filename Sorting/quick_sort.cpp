#include<iostream>
using namespace std;

// void swap(int arr[], int i, int j){
//     int temp=arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
// }

int partition(int arr[], int l, int r){

    int i = l-1;
    //int pivot= arr[r];

    for(int j=l; j<r; j++){

        if(arr[j]< arr[r]){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[r]);

    return i+1;

}

void quicksort(int arr[], int l, int r){
    
    if(l<r){

    int pi= partition(arr, l, r);

    quicksort(arr, l, pi-1);
    quicksort(arr, pi+1, r);

    }

}

int main(void){

    int n; cin>>n; 
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    quicksort(arr,0,n-1);
    for(int i=0; i<n; i++) cout<<arr[i]<<" "; 
}