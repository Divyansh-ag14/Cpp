#include<iostream>
using namespace std;

int main(void){

    int n;
    cout<<"Enter number: "; cin>>n;

    int rev_n=0;

    while (n>0)
    {
        int last_digit = n%10;
        rev_n = rev_n*10 + last_digit;
        n = n/10;
    }
    
    cout<<rev_n<<endl;

}