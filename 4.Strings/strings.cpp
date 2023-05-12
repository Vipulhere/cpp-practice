#include <bits/stdc++.h>
using namespace std;
int main(){
    //1st way
    string str1="abc";
    cout<<str1<<endl;
    string str2;
    str2="def";
    cout<<str2<<endl;

    vector <string> v;
    v.push_back("eee");
    v.push_back(str1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        sort(v[i].begin(),v[i].end());
        cout<<v[i]<<endl;
    }

    string str3;
    getline(cin, str3);
    cout<<str3<<endl;
    string s4 = "";
   s4 += str3 + str2 + "hello coding";
   cout<<str2<<endl;
   cout<<str3<<endl;
   cout<<s4<<endl;
   cout<<s4.size()<<endl;
   cout<<s4.length()<<endl;

   cout<<s4.substr(3)<<endl;
   string s5 = s4.substr(3,5);
   cout<<s5<<endl;

   cout<<s4.find("abc")<<endl;

   int a = 123;
   string s6 = to_string(a);
   cout<<s6<<endl;
   s6[1] = '4';
   cout<<s6<<endl;

    s6.push_back('5');
    cout<<s6<<endl;

    a = atoi(s6.c_str());
    cout<<a<<endl;


    return 0;
}