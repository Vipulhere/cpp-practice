#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[][100],int rows,int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[1][100];
    int rows,cols;
    cin>>rows>>cols;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    printArray(arr,rows,cols);
    return 0;
}