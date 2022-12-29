# include <iostream>
using namespace std;

int sum(int , int ); //FUNCTION PROTOTYPING
void g(); // OR void g(void)
int main(){
    int num1 , num2;  //ACTUAL PARAMETERS
    cout<<"Enter first number:"<<endl;
    cin>>num1;
    cout<<"Enter second number:"<<endl;
    cin>>num2;
    cout<<"The sum of two numbers is "<<sum(num1 , num2);
    g();

    return 0;
}
int sum(int a,int b ){ //FORMAL PARAMETERS
    int c = a + b;
    return c;
}
void g(){
    cout<<"\n Hello Good Morning";
}