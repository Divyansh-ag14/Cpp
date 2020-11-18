#include<iostream>            /* Merge Sort */
using namespace std;

void mergesort(int arr[],int,int);
void merge(int arr[],int,int,int);

int main(void){
	
	int i, j, n;
	cout<<"Merge Sort by Divyansh Agarwal"; cout<<endl; cout<<endl;
	cout<<"Enter the number of elements: "; cin>>n; cout<<endl;
	cout<<"Enter the elements: ";
	int arr[n];
	for (i=0; i<n; i++){
		cin>>arr[i];
	}
	
	int left= 0, right = n-1;
	
	mergesort(arr,left,right);
	
	cout<<"--------------------------------"; cout<<endl; 
	cout<<"Sorted Array:"; cout<<endl; cout<<endl;
	
	for(i=0; i<n; i++){
		cout<< arr[i]; cout<<" ";
	} 

}
void mergesort(int arr[], int left, int right){
	
	if (left<right){
		int	m = (left + right) / 2;
		
		mergesort(arr, left,m);
		mergesort(arr, m+1, right);
		
		merge(arr, left, m, right);	
	
	}
}
void merge(int arr[], int left, int m, int right){
	
	int arr1[10], arr2[10];
	int len1, len2;
	
	len1 = (m - left)+1;
	len2 = right - m;
	
	for(int i=0; i<len1; i++){
		arr1[i] = arr[left+i];
	}
	for(int j=0; j<len2; j++){
		arr2[j] = arr[j+m+1];
	}
	
	int x=0, y=0, z=left;
	
	while(x<len1 && y<len2){
		if(arr1[x] < arr2[y]){
			arr[z] = arr1[x];
			x++;
			z++;
		}
		else{
			arr[z] = arr2[y];
			y++;
			z++;	
		}
	}
	while(x<len1){
		arr[z] = arr1[x];
		x++;
		z++;
	}
	while(y<len2){
		arr[z] = arr2[y];
		y++;
		z++;
	}

}

