#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a = 9 ;
    double b = 10 ;
    int d = 18;
    int c = a+b;
    std::cout << c << std::endl;
    std::cout << a-b << std::endl;
    std::cout << a*b << std::endl;
    std::cout << b/a << std::endl;
    std::cout << d%a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << b++ << std::endl;
    double x =10; 
    double y = 5;
    std::cout << (x+10)/(3*y) <<std::endl;
    double income = 95000;
    double stax =  (income * 0.04);
    double ctax = (income * 0.02);
    cout << "state is " << stax << " county is " << ctax <<endl;
    cout << "Total tax is " << stax+ctax <<endl;

    // Input from the User 
    double x1, y1;
    cout << "The value is ";
    cin >> x1 >>y1;
    cout <<x1+y1;
    
    // Temperature Convert 
    double ce;
    double f; 
    cout<< "Enter C.";
    cin >> ce;
    cout << "Fah is " << (ce*(5))+32 <<endl;
    cout<< "Enter F.";
    cin >> f;
    cout << "Cel is " << (f-32)/1.8 <<endl;
    
    
    // Area of a circle 
    cout<< endl <<"Enter the radius";
    double r; 
    cin >> r;
    cout << "Area of the circle is " << M_PI * pow(r, 2);
    return 0 ;

    int values1 {0b1000};
    int values2 {0x132};
    cout<<values1 << endl <<values2;
    
    long elaspedtime = time(0);
    srand(elaspedtime);
    int number = rand() % 10;
    cout << endl<< number;
    return 0 ;
    
    
}