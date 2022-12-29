                     //DERIVED CLASS AMBIGUITY 2 // 
# include <iostream>
using namespace std;

class b{
    public:
    void say(){
        cout<<"Hello world"<<endl;
    }
};

class d :public b{
    int a;
    public:
    void say(){
        cout<<"Hello my beautiful people"<<endl;
        // D's new say() method will override base class's say() method
    }
};

int main(){
    b b;
    b.say();
    d d;
    d.say();
    return 0;
}