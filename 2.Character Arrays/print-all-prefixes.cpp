#include <iostream>
using namespace std;

void printAllPrefixes(char str[]){
    for(int e=0;str[e]!='\0';e++){
        for(int s=0;s<=e;s++){
            cout<<str[s];
        }
        cout<<endl;
    }
}

// void printSuffixes(char arr[], int n) {
//     for(int i=0; i<n; i++) {
//         for(int j=i; j<n; j++) {
//             cout << arr[j];
//         }
//         cout << endl;
//     }
// }

int main(){
    char str[]="abcd";
    printAllPrefixes(str);
    return 0;
}