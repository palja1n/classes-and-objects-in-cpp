#include <iostream>
using namespace std;
    
class rectangle{
    public:
    float length;
    float width;
    
    void area(){
        double area=length*width;
        cout<<"The area of the rectangle is: "<<area<<endl;
    }
};

int main(){
    rectangle r1;
    cout<<"Enter the length: "<<endl;
    cin>>r1.length;
    cout<<"Enter the width: "<<endl;
    cin>>r1.width;
    
    if(r1.length==r1.width){
        cout<<"It is a square."<<endl;
    }
    else{
        r1.area();
    }
    return 0;
}


/*
Output 1:
Enter the length: 
5.4
Enter the width: 
3.3
The area of the rectangle is: 17.82

Output 2:
Enter the length: 
5.3
Enter the width: 
5.3
It is a square.
*/
