# include <iostream>
using namespace std;

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n* factorial(n-1); //RECURSION
}

int fab(int n){
    if(n<2){
        return 1;
    }
    return fab(n-2) + fab(n-1); // RECURSION is not always easily readable
}

int main(){
    int n;
    cout<<"Enter any number ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<factorial(n)<<endl;

    return 0;
}