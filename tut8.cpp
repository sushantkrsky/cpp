# include <iostream>
using namespace std;
int main(){
    int a=4, b=5;
    cout<< "OPERATORS IN CPP:"<<endl; //endl works same as \n
    cout<< "OPERATORS ARE"<<"\n";
    cout <<"hello"<<"\n";

    //ARITHMETIC OPERATOR
    cout<<"The sum of two numbers is "<<a+b<<endl;
    cout<<"The value of a++"<<a++ <<endl;
    cout<<"The value of a--"<<a-- <<endl;
    cout<<"The value of ++a"<<++a <<endl;
    cout<<"The value of --a"<<--a <<endl;
    cout<<endl;

    //COMPARISON OPERATOR
    cout<<"The value of a==b "<<(a==b) <<endl;
    cout<<"The value of a!=b "<<(a!=b) <<endl;
    cout<<"The value of a>b "<<(a>b) <<endl;
    cout<<"The value of a<=b "<<(a<=b) <<endl;
    cout<<"The value of a>=b "<<(a>=b) <<endl;
    cout<<endl;

    //LOGICAL OPERATOR
    cout<<"The value of logical and operator is"<<((a!=b) && (a<b))<<endl;;
    cout<<"The value of logical or operator is"<<((a==b) || (a<b))<<endl;
    cout<<"The value of logical not operator is"<<(!(a==b));

     return 0;
}







