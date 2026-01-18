// there are two type of header files:
// 1. system header file: it comes with the compiler
#include<iostream>
// 2. user defined header file: it is written by the programmer
// #include "this.h" //--> this wiil produce an error if this.h is on present in the current directory
using namespace std;

int main()
{
    int a=4, b=5;
    cout<< "This is hello world program"<<endl;
    cout<< "following are the type of operators in C++"<<endl;
    // Arithmetic operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;

    //Assignment Operators --> used to assign values to variables
    // int a=3, b=5;
    // char d="c";

    // Comparison Operator 
    cout<<"Following are the comparison operators in C++"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    return 0;
}
