#include <iostream>
using namespace std;
int main(){
    int arr[20][20];
    int rows,cols;
    cin>>rows>>cols;
    //row-wise printting
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Printing row-Wise"<<endl;
    //row-wise printting
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // //column-wise printing
    // for(int i=0;i<cols;i++){
    //     for(int j=0;j<rows;j++){
    //         cin>>arr[j][i];
    //     }
    // }
    // //column-wise printing
    // cout<<"Printing Coloumn-Wise"<<endl;
    // for(int i=0;i<cols;i++){
    //     for(int j=0;j<rows;j++){
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}