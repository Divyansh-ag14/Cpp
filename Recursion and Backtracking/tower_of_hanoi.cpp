#include<iostream>
using namespace std;

void hanoi(int n, char src, char dest, char helper){

// to move rings from src to dest
// first move them to helper using dest
// then move from helper to dest using src

    if(n==0) return;

    hanoi(n-1, src, helper, dest);

    cout<<"move from "<<src<<" to "<<dest<<endl;

    hanoi(n-1, helper, dest, src);


}

int main(void){

    hanoi(3, 'A', 'C', 'B');

}