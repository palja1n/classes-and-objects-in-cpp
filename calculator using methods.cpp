#include <iostream>
using namespace std;
    
class Calculator{
    public:
    float a;
    float b;
    
    void addition(){
        int add=a+b;
        cout<<"The addition of the two numbers is: "<<add<<endl;
    }
    
    void subtraction(){
        int sub=a-b;
        cout<<"The subtraction of the two numbers is: "<<sub<<endl;
    }
    
    void multiplication(){
        int mult=a*b;
        cout<<"The multiplication of the two numbers is: "<<mult<<endl;
    }
    
    void division(){
        float div=a/b;
        cout<<"The division of the two numbers is: "<<div<<endl;
    }    
};

int main(){
    Calculator c1;
    cout<<"Enter the first number: "<<endl;
    cin>>c1.a;
    cout<<"Enter the second number: "<<endl;
    cin>>c1.b;
    
    c1.addition();
    c1.subtraction();
    c1.multiplication();
    c1.division();

    return 0;
}

/*
Output:
Enter the first number: 
13
Enter the second number: 
2
The addition of the two numbers is: 15
The subtraction of the two numbers is: 11
The multiplication of the two numbers is: 26
The division of the two numbers is: 6.5
  */
