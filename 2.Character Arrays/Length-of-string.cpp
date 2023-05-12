#include <iostream>
using namespace std;
int length(char input[]){
    int count=0;
    for(int i=0;input[i] !='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cin.getline(name,20);
    cout<<"Your name is "<<name<<endl;
    cout<<"Length is "<<length(name);
    return 0;
}