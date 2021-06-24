#include<iostream>
using namespace std;

void substrings(string str, string ans){

    if(str.length()==0) { cout<<ans<<endl; return; }

    char ch= str[0];
    substrings(str.substr(1), ans);
    substrings(str.substr(1), ans+ch);

}

int main(void){

    string str; cin>>str;
    substrings(str, "");
}