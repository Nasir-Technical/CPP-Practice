#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
}ep ;

union money
{
    /* data */
    int rice; 
    char car;
    float pounds;
};


int main(){

      enum Meal{breakfast, lunch, dinner};
      Meal m1 = lunch;
      cout<<(m1==1);
    //   cout<<breakfast;
    //   cout<<lunch;
    //   cout<<dinner;

    //    union money m1;
    //    m1.rice = 55;
    //    m1.car = 'c';
    //    m1.pounds = 1000;
    //    cout<<m1.rice;

    // ep nasir;
    // nasir.eId = 1;
    // nasir.favChar = 'A';
    // nasir.salary = 100000;
    // cout<<"The value is "<<nasir.eId<<endl;
    // cout<<"The favchar is "<<nasir.favChar<<endl;
    // cout<<"The value is "<<nasir.salary<<endl;
    return 0;
}