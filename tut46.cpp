#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y) //PARAMETRIZED CONSTRUCTOR
    {
        a = x;
        b = y;
    }
    complex(int x){ //MULTIPLE CONSTRUCTOR OR CONSTRUCTOR OVERLOADING
        a = x;
        b = 0;
    }
    complex(){ //DEFAULT CONSTRUCTOR
        a = 0;
        b = 0;
    }
    void printnumber()
    {
        cout << "Your number is " << a << "+"
             << "i" << b << endl;
    }
};

int main()
{
    complex c1(4, 6);
    c1.printnumber();
    complex c2(5);
    c2.printnumber();
    complex c3;
    c3.printnumber(); 
    return 0;
}