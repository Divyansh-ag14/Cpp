#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){

    if(n==1) return 1;

    bool restArray = isSorted(arr+1, n-1);

    return(arr[0]<=arr[1] && restArray);
}

int main(void){
    int n; cin>>n; int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    cout<<isSorted(arr, n);

}