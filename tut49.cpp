# include <iostream>
using namespace std;

class number{
    int  a;
    public :
    number(){
        a = 0;
    }
    number(int num){
        a = num;
    }
    number(number &obj){ //MAKES COPY OF A CONSTRUCTOR
        cout<<"copy constructor called"<<endl;
        a = obj.a;
    } //When no copy constructor is found,compiler supplies its own copy constructor
    void display(){
        cout<<"The number for this object is "<<a<<endl;
    }
};

int main(){
    number x, y, z(45),z2;
    z.display();
    x.display();
    y.display();
    number z1(z); //COPY CONSTRUCTOR INVOKED
    z1.display();

    z2 = z; //COPY CONSTRUCTOR NOT INVOKED

    number z3 = z; //COPY CONSTRUCTOR INVOKED

    return 0;
}