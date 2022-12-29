                // INITIALIZATION IN CONSTRUCTOR //
# include <iostream>
using namespace std;

/*
Syntaz for initialization list :
constructor (argument-list) : initialization-section{
    assignment + list + other code;
}
class test{
    int a;
    int b;
    public:
    test(int i, int j) : a(i), b(j) {
       constructor body
    }
};
*/
class test {
    int a;
    int b;
    public:
    // test(int i. int j) : b(j), a(i+b){}  ERROR bcz "a" should be initializes first
    test(int i, int j) : a(i), b((a+1)+j){
        cout<<"Constructor executed"<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
    }
};
int main(){
    test (2,3);
    return 0;
}