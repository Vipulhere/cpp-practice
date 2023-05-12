#include <iostream>
using namespace std;

int length(char input[]){
    int count=0;
    for(int i=0;input[i] !='\0';i++){
        count++;
    }
    return count;
}
void reverse(char input[]){
    int start=0;
    int end=length(input)-1;
    while(start<=end){
        swap(input[start],input[end]);
        start++;
        end--;
    }
}
int main(){
    char name[20];
    cin.getline(name,20);
    cout<<"Your name is "<<name<<endl;
    cout<<"Length is "<<length(name)<<endl;
    reverse(name);
    cout<<"Reverse is "<<name;
    return 0;
}