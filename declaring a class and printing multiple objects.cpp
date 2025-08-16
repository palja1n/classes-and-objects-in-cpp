#include <iostream>
using namespace std;
    
class Student{
    public:
    string name;
    string branch;
    string subject;
    string year;
    float result;
};

int main(){
    Student s1;
    s1.name="Pal Jain";
    s1.branch="E&TC";
    s1.subject="C++";
    s1.year="Second Year";
    s1.result=7.0;
    cout<<s1.name<<endl;
    cout<<s1.branch<<endl;
    cout<<s1.subject<<endl;
    cout<<s1.year<<endl;
    cout<<s1.result<<endl<<"\n";
    
    Student s2;
    s2.name="Mahi Thakrar";
    s2.branch="E&TC";
    s2.subject="DCLD";
    s2.year="Second Year";
    s2.result=7.5;
    cout<<s2.name<<endl;
    cout<<s2.branch<<endl;
    cout<<s2.subject<<endl;
    cout<<s2.year<<endl;
    cout<<s2.result<<endl;
}

/*
Output:
Pal Jain
E&TC
C++
Second Year
7

Mahi Thakrar
E&TC
DCLD
Second Year
7.5
*/
