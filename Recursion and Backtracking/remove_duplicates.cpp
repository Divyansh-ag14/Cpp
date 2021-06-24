#include<iostream>
using namespace std;

string rem_duplicates(string str){

    if(str.length()==1) return str;

    char i = str[0];// store the first chsr then call recursion

    string rest_string =rem_duplicates(str.substr(1));
    
    if(rest_string[0]==i) return rest_string;
    
    return i+rest_string;

}

int main(void){

    string str; cin>>str;
    cout<<rem_duplicates(str);

}