// given a 2d matrix, find a path for the rat so it can escape the maze
// matrix contains 0s and 1s. 0 means rat cant go there, 1 means it can
// rat can only move downwards and right
// create a bool functions to check if rat can go to certain location, satisfying the above constraints
// bool isSafe function will check for zeros and keep its location inside the range of matirx
// bool ratInMaze funciton will call isSafe() and then will call itself recursively till we get sol.
// ((right and downward recursive calls))

#include<iostream>
using namespace std;

bool isSafe(int **arr, int x, int y, int n){ // n is size, x and y to be used as arr[x][y]

    if(x<n && y<n && arr[x][y] !=0)
        return true;
    
    return false;

}

bool ratInMaze(int **arr, int x, int y, int n, int **sol_arr){

    // base condition rat as at the last point of arr 
    if(x==n-1 && y== n-1){
        sol_arr[x][y] = 1;
        return true;
    }
    
    if(isSafe(arr, x, y, n)){

        sol_arr[x][y] = 1; // go to that point
        
        if(ratInMaze(arr, x+1, y, n, sol_arr)) // right recursive calls
            return true;
        
        if(ratInMaze(arr, x, y+1, n, sol_arr)) // downward recursive callss
            return true;
            
        sol_arr[x][y] = 0;   // if we cant move right or downwards, then backtrack 
        return false;
    }
}

int main(void){
    
    int n; cout<<"Enter rows/cols of square matrix: "; cin>>n;
    
    int **arr= new int* [n]; // array of pointer 
    cout<<"Input in array"<<endl;
    for(int i =0; i<n; i++){
        arr[i] = new int[n];
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }    

    int **sol_arr= new int* [n]; // initially 0
    for(int i =0; i<n; i++){
        sol_arr[i] = new int[n];
        for(int j=0; j<n; j++){
            sol_arr[i][j] =0;
        }
    }

    if(ratInMaze(arr, 0, 0, n, sol_arr)){
        cout<<"------------------"<<endl;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
             cout<<sol_arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
        cout<<"This rat will be trapped forever!";


}