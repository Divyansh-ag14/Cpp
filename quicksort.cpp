#include<iostream>            /* Quick Sort */
using namespace std;

void qs(int arr[], int, int);
int part (int[], int, int);

int main(void){
	
	int i, j, n;
	
	cout<<"Quick Sort by Divyansh Agarwal"; cout<<endl; cout<<endl;
	cout<<"Enter the number of elements: "; cin>>n; cout<<endl;
	cout<<"Enter the elements: ";
	
	int arr[n];
	
	for (i=0; i<n; i++){
		cin>>arr[i];
	}
	
	cout<<endl;
	cout<<"--------------------------------"; cout<<endl;
	cout<<"Sorted Array:"; cout<<endl; cout<<endl;
	
	int left=0, right = n-1;
	qs(arr, left, right);
	
	for(i=0; i<n; i++){
		cout<<arr[i];
		cout<<" ";
	}
}
void qs(int arr[], int left, int right){
	
	int pivot;
	if(left<right){
		pivot = part(arr, left, right);
		qs(arr, left, pivot-1);
		qs(arr, pivot+1, right);
	}	
}
int part(int arr[], int left, int right){
	
	int pivot = arr[right];
	int store;
	int x = 0;
	
	for(int i=0; i<right; i++){
		if(arr[i] < pivot){
			/* swap */
		store = arr[i];
		arr[i] = arr[x];
		arr[x] = store;
		x++;
		} /* smaller ele on left */ 
	}
	store = pivot; // place pivot at correct position
	arr[right] = arr[x];
	arr[x] = pivot;
	return x;
}

	
