# include <iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex(int , int);
    void printnumber(){
        cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
    }   
};

complex :: complex(int x, int y){ //PARAMETRIZED CONSTRUCTOR
    a = x;
    b = y;
}

int main(){
    //IMPLICIT CALL
    complex c(4,6);
    //EXPLICIT CALL
    complex d = complex(5,7);
    c.printnumber();
    d.printnumber();
    return 0;
}