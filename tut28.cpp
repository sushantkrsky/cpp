# include <iostream>
using namespace std;

inline  int product(int a, int b){
    return a*b;
} //INLINE does'nt affect in output but it makes program fast
// it remove the concept of actual parameter and formal parameter
// it should be used in small programs

int main(){
    int a, b;
    cout<<"Enter the value of a and b:"<<endl;
    cin>>a>>b;
    cout<<"The product of given numbers is:"<<product(a,b);
    
    return 0;

}