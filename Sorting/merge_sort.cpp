#include<iostream>
using namespace std;

void merge(int arr[], int l, int m, int r){

    int n1= m-l+1;
    int n2= r-m;
    int a[n1], b[n2];

    for(int i=0; i<n1; i++) 
        a[i] = arr[l+i]; // starting point of array is l
    
    for(int i=0; i<n2; i++)
        b[i] = arr[m+i+1]; // starting point is m+1

    int i=0, j=0, k=l;

    while(i<n1 && j<n2){

        if(a[i] <= b[j]){
            arr[k++] = a[i++];
        }

        else{
            arr[k++] = b[j++];
        }

    }

    // fill any remaining elements
    while(i<n1){ 
        arr[k++]=a[i++];
    }

    while(j<n2){ 
        arr[k++]=b[++j];
    }
 
}

void meregeSort(int arr[],  int l, int r){

    if(l<r){

        int m= (l+r)/2;

        meregeSort(arr, l, m);
        meregeSort(arr, m+1, r);

        merge(arr, l, m, r);

    }

}


int main(void){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    meregeSort(arr, 0, n-1);

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}