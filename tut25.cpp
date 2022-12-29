# include <iostream>
using namespace std;

int sum(int a, int b){ //if we write this at the end, it will raise an error
    int c = a + b; // So we use function prototyping
    return c; //which earlier declare that there will be that type of function
}
int main(){
    int num1 , num2;
    cout<<"Enter first number:"<<endl;
    cin>>num1;
    cout<<"Enter second number:"<<endl;
    cin>>num2;
    cout<<"The sum of two numbers is "<<sum(num1 , num2)<<endl;


    return 0;
}