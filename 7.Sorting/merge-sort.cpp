#include <bits/stdc++.h>
using namespace std;
void mergeArrays(int x[],int y[],int arr[],int start, int end){
    int mid=(start+end)/2;
    int i=start;
    int j=mid+1;
    int k=start;
    while(i<=mid && j<=end){
        if(i[x]<y[j]){
            arr[k]=x[i];
            i++;
            k++;
        }else{
            arr[k]=y[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        arr[k]=x[i];
        k++;
        i++;
    }
    while(j<=end){
        arr[k]=y[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[],int start, int end){
    if(start>=end){
        return;
    }
    int mid=(start+end)/2;
    int x[100],y[100];
    for(int i=0;i<=mid;i++){
        x[i]=arr[i];
    }
    for(int i=mid+1;i<=end;i++){
        y[i]=arr[i];
    }
    mergeSort(x,start,mid);
    mergeSort(y,mid+1,end);
    mergeArrays(x,y,arr,start,end);
}

int main(){
    int arr[]={4,5,2,1,9,6,8};
    mergeSort(arr,0,6);

    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}