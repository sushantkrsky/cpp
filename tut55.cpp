//MULTIPLE INHERITANCE
# include <iostream>
using namespace std;

/* SYNTAX FOR INHERITING IN MULTIPLE INHERITANCE
CLASS {{DERIVED}} : {{VISIBILITY}} MODE BASE1,{{VISIBILITY}} MODE BASE2
*/
class base1{
    protected:
    int base1int;
    public:
    void setbase1int(int a){
        base1int = a;
    }
};

class base2{
    protected:
    int base2int;
    public:
    void setbase2int(int a){
        base2int = a;
    }
};

class derived : public base1, public base2{
    public :
    void show(){
        cout<<"The value of base1 is "<<base1int<<" and base2 is "<<base2int<<endl;
        cout<<"The sum of values is "<<base1int + base2int<<endl;
    }
};

int main(){
    derived harry;
    harry.setbase1int(22);
    harry.setbase2int(23);
    harry.show();
    return 0;
}

/*
INERITED DERIVED CLASS WILL LOOK LIKE THIS
DATA MEMBERS :- 
    base1int - PROTECTED
    base2int - PROTECTED
MEMBER FUNCTION :- 
    setbase1int - PUBLIC
    setbase2int - PUBLIC
    show        - PUBLIC
*/