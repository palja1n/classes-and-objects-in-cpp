#include <iostream>
using namespace std;

class MyClass {
public:
    int height=20;
    int width=10;
    int length=13;
    void myVolume(); 
    
    void Volume(){
    cout << height*width*length;
    }
};


void MyClass::myVolume() {
    cout << height*width*length;
}

int main() {
    
    
    MyClass M1;

    M1.Volume();
    
    cout<<endl;
    
    M1.myVolume();

    return 0;
}




/* Output:
2600
2600
*/
