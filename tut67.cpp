                               // VIRTUAL FUNCTIONS //
/*
If base class pointer points to the derived class, then also it will execute only baseclass
functions.
So, to solve this, Virtual Functions are used.
*/

# include <iostream>
using namespace std;

class baseclass{
    public:
    int var_base = 1;
    virtual void display(){
        cout<<"1 Displaying base class variable varbase "<<var_base<<endl;
    }
};

class derivedclass : public baseclass{
    public:
    int var_derived = 2;
    void display(){
        cout<<"2 Displaying base class variable varbase "<<var_base<<endl;
        cout<<"2 Displaying derived class variable varderived "<<var_derived<<endl;
    }
};

int main(){
    baseclass *base_class_pointer;
    baseclass obj_base;
    derivedclass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->display();

    return 0;
}