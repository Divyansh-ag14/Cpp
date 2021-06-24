#include<iostream>
using namespace std;

string moveXAtLast(string str){

    if(str.length()==1) return str;

    char i=str[0];
    string rest_str= moveXAtLast(str.substr(1));

    if(i=='x') return rest_str+i;
    return i+rest_str;
}

int main(void){

    string str; cin>>str;
    cout<<moveXAtLast(str);
}