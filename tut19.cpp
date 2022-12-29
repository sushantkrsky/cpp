# include <iostream>
using namespace std;
int main(){
    // What is POINTER - data type which holds the address of other data types

    int a = 3;
    int *b = &a;
    int **c = &b;
    // & - (Address of) operator
    // * - (value at) Deference operator
    cout<<"The address of a is "<<b<<endl;
    cout<<"The address of a is "<<&a<<endl;

    cout<<"The value at address of b is "<<*b<<endl;

    cout<<"The address of b is "<<c<<endl;
    cout<<"The address of b is "<<&b<<endl;

    cout<<"The value at address of c is "<<**c<<endl;


    

    return 0;
}
