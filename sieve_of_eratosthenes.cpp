// used to print prime numbers

// input n
// create an arr[n] = 0;
// 0 means unmarked
// strart loop from int i = 2; 
// check if arr[i] is unmarked i.e =0
// if unmarked, mark all its multiples and increment by j*j as all the multiples in between will be marked by prev num

#include<iostream>
using namespace std;

int main(void){

    int n; cout<<"Enter the range of prime numbers: "; cin>>n;
    bool arr[n] = {0};
   
    for(int i=2; i<=n; i++){
        if(!arr[i]){
            for(int j= i*i; j<=n; j+=i){
                arr[j] = 1;
            }
        }
    }

    for(int i=2; i<=n; i++){
        if(!arr[i])
            cout<<i<<" ";
    }
}