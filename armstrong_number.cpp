#include<iostream>
#include<math.h>
using namespace std;

bool isArmstrong(int n){

    int sum=0;
    int original_n = n;
    while(n>0){
        int last_digit = n%10;
        sum += pow(last_digit,3);
        n = n/10;
    }
    cout<<sum<<endl;
    if(sum == original_n)
        return true;
    else
        return false;
}


int main(void)
{
    int n;
    cout<<"Enter number: "; cin>>n;

    if(isArmstrong(n)){
        cout<<n; cout<< " is an Armstrong number!";
    }
    else{
         cout<<n; cout<< " is not an Armstrong number!";
    }
}
