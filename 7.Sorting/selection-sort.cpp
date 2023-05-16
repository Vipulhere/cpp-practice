#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0;i<=n-2;i++){
        int smallest=i;
        for(int j=i+1;j<n-1;j++){
            if(arr[j]<arr[smallest]){
                smallest=j;
            }
        }
        swap(arr[i],arr[smallest]);
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

    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}