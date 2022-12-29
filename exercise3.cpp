/*
CREATE 2 CLASSES -
    1. Simple calculator -- takes input of 2 numbers using a utility function and
    performs  +,-,*,/ and displays the result using another function
    2. scientific calculator -- takes input of 2 numbers using a utility function and
    performs any four scientific operation of ur choice and displays the result using 
    another function
    create another class hybridcalculator and inherit it using these 2 classes
*/

# include <iostream>
# include <cmath>
using namespace std;

class simplecalculator{
    int n1,n2;
    public:
    void utility1(void){
        cout<<"Enter first number: "<<endl;
        cin>>n1;
        cout<<"Enter second number: "<<endl;
        cin>>n2;
    }
    void show1(void){
        cout<<"The sum of two numbers is "<<n1+n2<<endl;
        cout<<"The difference of two numbers is "<<n1-n2<<endl;
        cout<<"The multiplication of two numbers is "<<n1*n2<<endl;
        cout<<"The division of two numbers is "<<n1/n2<<endl;

    }
};

class scientificcalculator{  
    int n3;
    public:
    void utility2(void){
        cout<<"Enter the number on which operation need to be perform "<<endl;
        cin>>n3;
    }
    void show2(void){
        cout<<"Square of the number is "<<n3*n3<<endl;
        cout<<"Squareroot of the number is "<<sqrt(n3)<<endl;
        cout<<"SIN of the number is "<<sin(n3)<<endl;
    }
};

class hybridcalculator : public simplecalculator, public scientificcalculator{
};

int main(){
    int num;
    hybridcalculator c;
    cout<<"Press 1 if uh want simple one and 2 if uh want scientific one: "<<endl;
    cin>>num;
    if(num ==1){
        c.utility1();
        c.show1();
    }
    else{
        c.utility2();
        c.show2();
    }
    return 0;
}