#include<iostream>

using namespace std;
int glo = 6;
void sum(){
    int a;
    cout<< glo;
}

int main() {
    int glo=9;
    glo=78;
    // int a = 15;
    // int b = 20;
    int a=15, b=20;
    float pi = 3.14;
    char c = 'D';
    bool tf = true;
    sum();
    cout<<glo<<tf;
    // cout<<" This is Practice 4. \n Here the value of A is "<<a
    // <<".\n The Value of B is "<< b;
    // cout<<"\n the value of pi is: "<<pi;
    // cout<<"\n the value of C is: "<<c;
    return 0;
}