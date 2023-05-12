#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Before swapping "<<a<<" "<<b<<endl;
    //1st way
    // swap(a,b);

    //2nd
    // int temp=a;
    // a=b;
    // b=temp;

    //3rd way
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"After swapping "<<a<<" "<<b <<endl;

    return 0;
}