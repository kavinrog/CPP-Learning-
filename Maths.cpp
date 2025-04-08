#include <iostream>

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
    cout << "Total tax is " << stax+ctax;
}