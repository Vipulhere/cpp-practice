#include <iostream>
using namespace std;
void printArray(int arr[][5],int rows,int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    // int arr[][5]={{1,2,3},
    //               {4,5,6}};

    //zeros 
    int arr1[2][5]={{0}};
    printArray(arr1,2,5);
    // printArray(arr,2,5);
    return 0;
}