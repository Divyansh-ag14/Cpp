#include<iostream>
using namespace std;

int main(void){

    int n; cout<<"Enter stirng size: "; cin>>n;
    char arr[n+1]; cout<<"Enter String: "; cin>>arr;
    bool flag=1;
    for(int i=0; i<n; i++){
        if(arr[i] != arr[n-1-i]){
            flag =0;
            break;
        }
    }
    if(flag)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
}