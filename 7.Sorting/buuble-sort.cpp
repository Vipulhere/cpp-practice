#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=1;i<=n-1;i++){
        int flag=0;
        for(int j=0;j<=n-2;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
}

int main(){
    cout<<"Enter the size of an array "<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}