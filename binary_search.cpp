#include<iostream>
using namespace std;

int main(void){
	int n, i, j, m, flag, x;
	
	cout<<"##### BINARY SEARCH BY DIVYANSH AGARWAL #####"; cout<<endl; cout<<endl;
	cout<<"Enter the number of elements in array: "; cin>>n; cout<<endl;
	cout<<"Enter the elements: ";
	
	int arr[n];
	for (i=0;i<n;i++){
		cin>>arr[i];
	}
	
	// check if array is sorted or not
	// for binary we require a sorted array
	
	int a = 1;
	for(i=0; i<n; i++){
		while(a < n){
			if(arr[i] > arr[a]){
				flag = 11;
				break;
			}
		a++;
		}
	}
	
	// if flag becomes 11, then we have to sort the array
	// we are sorting the array in ascending order
	// using insertion sort to sort the array
	
	if (flag == 11){
		cout<<"---------------------------------------------------------------"<<endl;  
		cout<<"The array is unsorted, hence sorting the array......"; cout<<endl<<endl;
		
		int key;
		for (i=1; i<n; i++){
			key = arr[i];
			j = i-1;
			while(j>=0 && arr[j] > key){
				arr[j+1] = arr[j];
				j = j-1;
			}
			arr[j+1] = key;
		}
		cout<<"Array sorted."; cout<<endl; 
		cout<<"---------------------------------------------------------------"<<endl;  
	} 
			
	cout<<endl; cout<<"Enter the element you want to serach: "; cin>>x; cout<<endl;
	
	/* after sorting the array compare the input elemnt (x) with the middle element (m) of the array
	   
	   if x is smaller then m, then we only need to search it in the left part of the array 
	   
	   if x is greater then m, then we will search for it in the right part of array
	*/
	   
	int left= 0; int right = n-1; // left and right indicate starting and ending positions (first and last element) of the array
	
	while (left<=right){
		m = (left + right) /2; 
		if (arr[m] == x){ 
			cout<<x<<" is in the array at index ("<<m<<") of the sorted array: "; 
			cout<<"(The starting index is 0)";
			flag=1;
			break;
		}
	    else if (arr[m] > x){ // if x is smaller then set (right as m-1)
			right = m-1;
	    }
	    
		else{                // else set (left as m+1)
			left = m+1; 
		}
	}
	
	// if flag does not become 1 then element is not present in the array
	
	if (flag !=1){ 
		cout<<x<<" is not in the array";
	}
}

