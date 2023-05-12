#include <iostream>
#include <climits>
using namespace std;
int main(){
    cout<<"Enter the size of your array: "<<endl;
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int largest=INT_MIN;

    int smallest=INT_MAX;

    for(int i=0;i<n;i++){
        if(largest<a[i]){
            largest=a[i];
        }
        if(smallest>a[i]){
            smallest=a[i];
        }
    }
    cout<<"Largest Value = "<<largest<<endl;
    cout<<"Smallest Value = "<<smallest<<endl;
    return 0;
}