#include<iostream>
using namespace std;
int main(void){
	cout<<"#### ACTIVITY SELECTION BY DIVYANSH AGARWAL :) ####"; cout<<endl; cout<<endl;
	int n, i, flag;
	
	cout<<"Enter the number of activities: "; cin>>n;
	
	int s[n], f[n]; int ac[n]; // s[] and f[] store start and finish time. ac[] stores activity number.
	
	for(i=0; i<n; i++){ // this for loop sets activity numbers in ac[]: (activities start from 1 and not 0)
		ac[i] = i+1; 
	}
	
	// taking start and finish time as input

	for(i=0; i<n; i++){
		cout<<"Enter starting time for activity  : "; cout<<i+1; cout<<" - "; cin>>s[i];
	}
	cout<<"------------------------------------------"; cout<<endl;
	for(i=0; i<n;i++){
		cout<<"Enter completion time of activity : "; cout<<i+1; cout<<" - "; cin>>f[i];
	}
	cout<<"------------------------------------------"; cout<<endl;
	
	// check if activities are sorted in ascending order of their finish time
	// if not flag becomes 1 and activities are sorted using bubble sort
	
	int a = 1;
	for(i=0; i<n; i++){
		while(a <=n){
			if(f[i] > f[a]){
				flag = 1;
				break;
			}
		a++;
		}
	}
	
	// bubble sort to sort activities in ascending order of their finish time
	// note: (it is imkportant to make changes in s[] and ac[], whenevr a swap occurs in f[])
	if(flag == 1){ 
		cout<<"Sorting activities according to their completion time...................";
		cout<<endl<<endl;
		int store;
		for(i=0; i<n-1; i++){
			for(int j=0; j<n-i-1; j++){
				if(f[j] > f[j+1]){
					/* swap */
					store = f[j];
					f[j] = f[j+1];
					f[j+1] = store;
					
					/* match s */
					store = s[j];
					s[j] = s[j+1];
					s[j+1] = store;
					
					/* activity number is adjusted */
					store = ac[j];
					ac[j] = ac[j+1];
					ac[j+1] = store;
				}
			}
		}
	}
	
	cout<<"Selected Activities :"; cout<<endl;
	cout<<"------------------------------------------"; cout<<endl;

	/* printing results
	 
	 {first activity is always printed 
	 if starting time of activity is less then or equal to the finish time of prevoius activity
	 then select it}
	*/
	
	// activity number
	cout<<"Activity: "; cout<<ac[0]; cout<<" "; 
	
	int x=0; 
	for(int j=1; j<n; j++){
		if (s[j] >= f[x]){ 
			cout<<ac[j]; cout<<" ";
			x++;
		}
	}
	cout<<endl<<endl;
	
	// starting time
	x=0;
	cout<<"Starting time: "; cout<<s[0]; cout<<" ";
	
	for(int j=1; j<n; j++){
		if (s[j] >= f[x]){
			cout<<s[j]; cout<<" ";
			x++;
		}
	}
	cout<<endl<<endl;
	
	// finish time
	x=0;
	cout<<"Completion time: "; cout<<f[0]; cout<<" ";
	for(int j=1; j<n; j++){
		if (s[j] >= f[x]){
			cout<<f[j]; cout<<" ";
			x++;
		}
	}	
}
