#include<iostream>
using namespace std;

// q1 - rev a string using recursion

// logic - keep removing 1st letter till the string is empty i.e ("") and then return it and print 0th ele.
/*

abcde
bcde
cde
de
e       <-------  str[0]   
"" -> return ---| 

*/

void rev_str(string str){

    if(str.length()==0) // base condition
        return;
    string sub_str = str.substr(1); // generates a substring starting from index 1 of str
    rev_str(sub_str);
    cout<<str[0]; // after return call - print the first element  

}

// q2 - replace pi with 3.14 using rec (piabcdepipiabdepi --> 3.14abcde3.143.14abde3.14)

// logic - check if 0th and 1st ele is p and i, then print 3.14 and call rec on the rest of the string (from index 2) 
// if 0th and 1st elements are diff from p and i, print 0th element and call rec  from index 1

void repPi(string str){

    if(str.length()==0) // base condition
        return;

    if(str[0] == 'p' && str[1] == 'i'){
        cout<<"3.14";
        repPi(str.substr(2));
    }
    else{
        cout<<str[0];
        repPi(str.substr(1));
    }
    

}

int sum(int n){
    if(n==0)
        return 0;

    return n + sum(n-1); 
}

int power(int n, int p){
    if(p==0)
        return 1;
    return n * power(n, p-1);

}

int factorial(int n){

    if(n==0)
        return 1;
    return n* factorial(n-1);

}

int fibSeries(int n){

    if(n==0 || n==1)
        return n;

    return fibSeries(n-1) + fibSeries(n-2);

}


int main(void){
    
    string str = "divyansh";
    cout<<"Q1:"<<endl;
    cout<<"original string: "<<str<<endl<<"reversed string: ";
    rev_str(str);
    cout<<endl<<endl;

    cout<<"Q2:";
    str = "piabcdepipiabdepi";
    cout<<"original string: "<<str<<endl<<"replaced string: ";
    repPi(str);


}
