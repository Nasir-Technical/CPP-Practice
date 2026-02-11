#include <iostream>
using namespace std;

class simple
{
    int data1;
    int data2;
    int data3;

public:
    simple(int a, int b = 11, int c = 13)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void print();
};
void simple ::print()
{
    cout << "The value of data1 and data2 and data3 is " << data1 << ", " << data2 << " and " << data3;
}

int main()
{
    simple s(8);
    s.print();
    return 0;
}