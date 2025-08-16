#include <iostream>
using namespace std;
    
class Car{
    public:
    string member;
    string name;
    string brand;
    int price;
    int year;
};

int main(){
    Car c1;
    cout<<"Enter the member name: "<<endl;
    cin>>c1.member;
    cout<<"Enter the car name: "<<endl;
    cin>>c1.name;
    cout<<"Enter the brand name: "<<endl;
    cin>>c1.brand;
    cout<<"Enter the price of the car: "<<endl;
    cin>>c1.price;
    cout<<"Enter the car launch year: "<<endl;
    cin>>c1.year;
    cout<<c1.member<<endl;
    cout<<c1.name<<endl;
    cout<<c1.brand<<endl;
    cout<<c1.year<<endl<<"\n";
    
    Car c2;
    cout<<"Enter the member name: "<<endl;
    cin>>c2.member;
    cout<<"Enter the car name: "<<endl;
    cin>>c2.name;
    cout<<"Enter the brand name: "<<endl;
    cin>>c2.brand;
    cout<<"Enter the price of the car: "<<endl;
    cin>>c2.price;
    cout<<"Enter the car launch year: ";
    cin>>c2.year;
    cout<<c2.member<<endl;
    cout<<c2.name<<endl;
    cout<<c2.brand<<endl;
    cout<<c2.year<<endl<<"\n";
}

/*
Output:
Enter the member name: 
Pal
Enter the car name: 
Nexon
Enter the brand name: 
Tata
Enter the price of the car: 
1500000
Enter the car launch year: 
2024
Pal
Nexon
Tata
2024

Enter the member name: 
Sam
Enter the car name: 
Exter
Enter the brand name: 
Hyundai
Enter the price of the car: 
1000000
Enter the car launch year: 2025
Sam
Exter
Hyundai
2025
*/
