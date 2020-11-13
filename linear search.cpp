#include<iostream>
using namespace std;

int main(void){
	
	int n, i, x, flag;
	
	cout<<"Enter the number of elements in array: "; // input number of elements in the array (n)
	
	cin>>n;
	cout<<endl;
	cout<<"Enter elements in the array: "; // input elements in the array
	
	int arr[n];
	for (i=0;i<n;i++){
		
		cin>>arr[i];
	}
	
	cout<<endl;
	cout<<"Enter the element you want to search: "; cin>>x; cout<<endl; // input the number user wants to search (x)
	if (arr[0] == x){
			cout<<x<<" is in the array at index 0";
		}
	
	// check if x is present in the array
	// flag becomes 1 if x is present in the element 	
	
	for (int j=0 ; j<n ; j++){
		
		if (arr[j] == x){

			cout<<x<<" is in the array at index: ";
			cout<<j;
			flag=1;
			break; // break is used to exit the loop as soon as x is found in array so no further iterations occur
		}
	}
	
	// if flag does not become 1, then x is not present in the array
	// so if condition becomes true and our message will be printed

	if (flag !=1){
		
		cout<<x<<" is not in the array";
	}
}
