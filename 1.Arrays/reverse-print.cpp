#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter Size: "<<endl;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Before reverse"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<< " ";
    }
    cout<<endl;
    // a=b;
    // b=temp;
    cout<<"After Reverse"<<endl;
    for(int i=n-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
    return 0;
}