#include"bits/stdtr1c++.h"
using namespace std;

int main(void){

    int rows,cols; cout<<"Enter the dimensions: "; cin>>rows>>cols;
    int arr[rows][cols];

    cout<<"Enter elements:"<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"-------------------"<<endl;
    int row_start=0,  row_end=rows-1, col_start=0, col_end=cols-1;

    // 4 traverals row_start +1 -> col_end -1 -> row_end -1 -> col_start +1 

    while(row_start <= row_end && col_start <= col_end){

        for(int col=col_start; col<= col_end; col++){
            cout<<arr[row_start][col]<<" ";
        }
        cout<<endl;
        row_start +=1;

        for(int row=row_start; row<=row_end; row++){
            cout<<arr[row][col_end]<<" ";
        }
        cout<<endl;
        col_end -=1;

        for(int col = col_end; col>= col_start; col--){
            cout<<arr[row_end][col]<<" ";
        }
        cout<<endl;
        row_end -=1;

        for(int row=row_end; row>=row_start; row--){
            cout<<arr[row][col_start]<<" ";
        }
        cout<<endl;
        col_start+=1;
    }

}