#include <iostream>
// #include "students-use.cpp"
using namespace std;
class student{
    public:
    int age;
    int rollNo;
};
int main(){
    student s1,s2;
    //static way
    s1.age=23;
    s1.rollNo=03;
    cout<<"S1 details using static way"<<endl;
    cout<<s1.age<<endl;
    cout<<s1.rollNo<<endl;
    //dyanic way
    student *s3=new student;

    (*s3).age=53;
    (*s3).rollNo=101;

    // short cut for dyanmically
    // s3->age=23;
    // s3->rollNo=23;
    cout<<"S3 details using dynamic way"<<endl;
    cout<<(*s3).age<<endl;
    cout<<(*s3).rollNo<<endl;
    return 0;
}