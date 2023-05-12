#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n,int key){
    int start=0,end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            end=mid-1;
        }else{
            start=mid+1;
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

    sort(arr,arr+n);

    int pos=binarySearch(arr,n,key);
    if(pos==-1){
        cout<<"Key not Found"<<endl;
    }else{
        cout<<"Key found at index "<<pos<<endl;
    }

    return 0;
}