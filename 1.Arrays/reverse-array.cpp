#include <iostream>
using namespace std;
int main(){
    cout<<"Enter size of your array: "<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"Reversed array"<<endl;
    for(int i=0;i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}