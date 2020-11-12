#include<iostream>
using namespace std;
int main(void){
	cout<<"#### ACTIVITY SELECTION BY DIVYANSH AGARWAL :) ####"; cout<<endl; cout<<endl;
	int n, i, flag;
	cout<<"Enter the number of activities : "; cin>>n;
	int s[n], f[n]; int ac[n];
	
	for(i=0; i<n; i++){
		ac[i] = i+1;
	}
	
	for(i=0; i<n; i++){
		cout<<"Enter starting time for activity  : "; cout<<i+1; cout<<" - "; cin>>s[i];
	}
	cout<<"------------------------------------------"; cout<<endl;
	for(i=0; i<n;i++){
		cout<<"Enter completion time of activity : "; cout<<i+1; cout<<" - "; cin>>f[i];
	}
	cout<<"------------------------------------------"; cout<<endl;
	int a = 1;
	for(i=0; i<n; i++){
		if(f[i] > f[a]){
			cout<<"Sorting activities according to their completion time...................";
			flag = 1;
			break;
		}
		a++;
	}
	if(flag == 1){
	int store_s, store_f, store_ac;
	for(i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(f[j] > f[j+1]){
				/* swap */
				store_f = f[j];
				f[j] = f[j+1];
				f[j+1] = store_f;
				/* match s */
				store_s = s[j];
				s[j] = s[j+1];
				s[j+1] = store_s;
			
				store_ac = ac[j];
				ac[j] = ac[j+1];
				ac[j+1] = store_ac;
			}
		}
	}
}
	
	cout<<"Selected Activities :"; cout<<endl;
	cout<<"------------------------------------------"; cout<<endl;

	
	cout<<"Activity : "; cout<<ac[0]; cout<<" ";
	
	int x= 0; 
	for(int j=1; j<n; j++){
		if (s[j] >= f[x]){
			cout<<ac[j]; cout<<" ";
			x++;
		}
	}
	cout<<endl;
	
	int y=0;
	cout<<"Starting time : "; cout<<s[0]; cout<<" ";
	for(int j=1; j<n; j++){
		if (s[j] >= f[y]){
			cout<<s[j]; cout<<" ";
			y++;
		}
	}
	cout<<endl;
	
	int z=0;
	cout<<"Completion time : "; cout<<f[0]; cout<<" ";
	for(int j=1; j<n; j++){
		if (s[j] >= f[z]){
			cout<<f[j]; cout<<" ";
			z++;
		}
	}	
}
