#include <bits/stdc++.h>
using namespace std;
int partition(int arr[],int start,int end){
    int i=start;
    int pivot=arr[end];
    for(int j=start;j<=end-1;j++){
        if(arr[j]<pivot){
            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[i],arr[end]);
    return i;
}
void quickSort(int arr[],int start, int end){
    if(start>=end){
        return;
    }
    int p=partition(arr,start,end);
    quickSort(arr,start,p-1);
    quickSort(arr,p+1,end);
}
int main(){
    int arr[]={4,5,2,6,3,7,-9};
    quickSort(arr,0,6);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}