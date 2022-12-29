                              // "THIS" POINTER //
/*
"This" is a keyword which is a pointer which points to the object which is being
created or which invokes the member function
*/

# include <iostream>
using namespace std;

class A{
    int a;
    public:
    // void setdata(int a){ }  // BOTH ARE SAME
    A & setdata(int a){ //Both variable name are same
        // a=a; Due to this,garbage value is printed
        this->a = a;
        return *this;
    }
    void getdata(){
        cout<<"The value of a is "<<a<<endl;
    }
};

int main(){
    A a;
    a.setdata(4).getdata();
    a.getdata(); // Will return garbage value
    return 0;
}