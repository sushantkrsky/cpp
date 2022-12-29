# include <iostream>
using namespace std;

class complex{
    int a,b;
    public:
    //CONSTRUCTOR is a special member function with same name as that of the class
    //It is used to initialize the objects of its class 
    //It is automatically invoked whenever anv object is created
    complex(void); //Constructor Declaration
    void printdata(){
        cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

complex :: complex(void){ //This is a default constructor as it takes no parameter
    a = 10;
    b = 0;
    cout<<"Hello world"<<endl;
}

int main(){
    complex c;
    c.printdata();
    return 0;
}
/*
CHARACTERISTICS OF CONSTRUCTOR :-
1. It should be declared in the public section of class
2. They are automatically invoked whenever the object is created
3. They cannot return values and do not return types
4. It can have default arguments
5. We cannot refer to their address
*/