#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[],int n,int key){
    for(int i=1;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    cout<<"Enter Size of array: "<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter key : "<<endl;
    int key;
    cin>>key;

    int pos=linearSearch(arr,n,key);
    if(pos==-1){
        cout<<"Key not Found"<<endl;
    }else{
        cout<<"Key found at index "<<pos<<endl;
    }

    return 0;
}