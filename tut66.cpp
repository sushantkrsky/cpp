                         // POINTER TO DERIVED CLASS //
# include <iostream>
using namespace std;

class baseclass{
    public:
    int var_base;
    void display(){
        cout<<"Displaying base class variable varbase "<<var_base<<endl;
    }
};

class derivedclass : public baseclass{
    public:
    int var_derived;
    void display(){
        cout<<"Displaying base class variable varbase "<<var_base<<endl;
        cout<<"Displaying derived class variable varderived "<<var_derived<<endl;
    }
};

int main(){
    baseclass *base_class_pointer;
    baseclass obj_base;
    derivedclass obj_derived;

    base_class_pointer = &obj_derived; //Pointer base class pointing to derived class
    base_class_pointer->var_base = 34;
    base_class_pointer->display();
    // base_class_pointer->var_derived = 65; //only access base class member

    derivedclass *derived_class_pointer;
    derived_class_pointer = &obj_derived; //Pointer derived class pointing to derived 
    derived_class_pointer ->var_derived = 23;
    derived_class_pointer ->var_base = 233;
    derived_class_pointer->display();
    
    return 0;
}