#include<iostream>
using namespace std;
int main(void){
	
	float max_weight; // to store the max weight allowed
	int i,j,n;
	
	cout<<"$$## FRACTIONAL KNAPSACK by Divyansh Agarwal ##$$"; cout<<endl; cout<<endl;
	
	cout<<"Enter the maximum weight allowed: "; cin>>max_weight; cout<<endl;
	cout<<"Enter the number of weights: ";cin>>n; cout<<endl;
	
	// ((using float to get deciaml value of ratio))
	
	float weights[n], value[n]; // weights[] and value[] store the (input weight and profit value repectively)
	
	float sum_weight=0, sum_value=0;  // to store the entire sum of weights[] and value[]
	
	// take input from user
	
	for(i=0; i<n; i++){
		
		cout<<"Enter weight: "; cin>>weights[i];
		sum_weight += weights[i];
		
		cout<<"Enter its value: "; cin>>value[i];
		sum_value += value[i];
		
		cout<<endl;
		
	}
	
	float ratio[n]; // to store the ratio (value/weight)
	
	for(i=0; i<n; i++){
		
		ratio[i] = value[i]/weights[i];
		
	}
	
	if(sum_weight <= max_weight){
		
		if(sum_weight = max_weight){
			cout<<"(Since sum of all weights is equal to the max capacity, ";
			}
		else{
			cout<<"(Since sum of all weights is less then the max capacity, ";
		}	
		cout<<"so all of them are selected.)"; cout<<endl;
		cout<<"--------------------------------"<<endl;
		cout<<"Max value is: "; cout<<sum_value;
	
	}
	
	else{
			// arrange elements in descending order of their (value/weight) ratio
			// using bubble sort 
// note: (whenever we swap elements based on their ratio, it is important to make changes in weight[] and value[] too)
	
		float store;
	
		for(i=0; i<n; i++){
		
			for(j=0; j<n-i-1; j++){
			
				if(ratio[j] < ratio[j+1]){
				
				// swap
				store = ratio[j+1];
				ratio[j+1] = ratio[j];
				ratio[j] = store;
				
				// arrange weights 
				store = weights[j+1];
				weights[j+1] = weights[j];
				weights[j] = store;
				
				// arrange value
				store = value[j+1];
				value[j+1] = value[j];
				value[j] = store;
			
			}
		
		}
	
	}

	// after sorting we have to add every possible weight as whole and others as some fraction of their weights
	// such that the total weight remains less then or equal to the allowed capacity 
	
		float total_weight = 0, total_value = 0, fraction; 
		int count1=0, count2=0;
		
		/* 
		whole[]  - for weights selected entirely
		fr[]     - stores fraction values
		frac_w[] - stores weights which were partially selected 	
		*/
		
		float whole[n], fr[n], frac_w[n];  
		int flag=0;
	
		while(total_weight < max_weight){
			
			for(i=0; i<n; i++){
				
				if(max_weight - total_weight >= weights[i]){
					
					whole[count1] = weights[i];
					total_weight += weights[i];
					total_value += value[i];
					count1++;
				
				}
				
				else{ // this part stores fraction and the weights associated with it
				
					fraction = (max_weight - total_weight)/ weights[i];
					fr[count2] = fraction;
					frac_w[count2] = weights[i];
					total_weight += (weights[i] * fraction);
					total_value += (value[i] * fraction);
					count2++;
				
				}
			
			}	 
		
		}
		
		// printing results
		
		cout<<"--------------------------------"<<endl;
		cout<<"Max value is: "<<total_value<<endl;
		cout<<"--------------------------------"<<endl;
	
		cout<<"Weights selected enitrely: ";
	
		for(i=0; i<count1; i++){
        
			cout<<whole[i];
        	cout<<' ';
    	}
	
		cout<<endl;
		cout<<"--------------------------------"<<endl;
	
		cout<<"Weights selected partially:"; cout<<endl; cout<<endl;
	
		// if, for a certain weight the fraction is 0, then it will not be selected 
		
		float not_selected[count2];
		int count=0;
	
		for(i=0; i<count2; i++){
		
			if(fr[i]!=0){
				cout<<frac_w[i]<<", "<<"frcation: "<<fr[i]<<endl;
			}
			
			else{ // if fraction is 0, the weight will not be selected and flag becomes 1

				not_selected[count] = frac_w[i];
				count++;
				flag = 1;
			}
		
		}
		
		if(flag = 1){
		
			cout<<"--------------------------------"<<endl;
			cout<<"Weights that were not selected: "; 
		
			for(i=0; i<count; i++){
				
				cout<<not_selected[i]<<" ";
			
			}
		
		} 	
	
	}

}
