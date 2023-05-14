#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n<0) return -1;
    if(n==0) return 1;
    int smallAns= fact(n-1);
    return n*smallAns;
}

int main(){
    cout<<"Enter your number"<<endl;
    int n;
    cin>>n;
    cout<<"Factorial of "<<n<< " is "<<fact(n)<<endl;
    return 0;
}