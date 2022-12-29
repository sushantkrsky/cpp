                   // CONSTRUCTOR IN DERIVED CLASS //
/*
  1. If base class constructor does not have any arguments,there is no need of any 
    constructor in derived class
  2. If there are one or more arguments in the base class constructor,derived
     class need to pass arguments to the base class constructor
  3. if both base and derived classes have constructors, base class constructor is
     executed first
  4. Invoked in the order declared
  5. virtual base class << non-virtual base class << derived class
*/

# include <iostream>
using namespace std;

class base1{
    int data1;
    public:
    base1(int a){
        data1 = a;
        cout<<"Base1 class constructor called"<<endl;
    }
    void printdatabase1(void){
        cout<<"The value of data1 is "<<data1<<endl;
    }
};

class base2{
    int data2;
    public:
    base2(int a){
        data2 = a;
        cout<<"Base2 class constructor called"<<endl;
    }
    void printdatabase2(void){
        cout<<"The value of data is "<<data2<<endl;
    }
};

class derived : public base1, public base2{
    int derived1, derived2;
    public:
    derived(int a, int b, int c, int d): base1(a) , base2(b){
        derived1 = c;
        derived2 = d;
        cout<<"Derived class constructor called"<<endl;
    }
    void printdataderived(void){
        cout<<"The value of derived1 is "<<derived1<<endl;
        cout<<"The value of derived2 is "<<derived2;
    }
};

int main(){
    derived harry(1,2,3,4);
    harry.printdatabase1();
    harry.printdatabase2();
    harry.printdataderived();

    return 0;
}