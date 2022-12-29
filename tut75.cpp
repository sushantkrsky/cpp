                       // TEMPLATE WITH DEFAULT PARAMETER //
# include <iostream>
using namespace std;

template <class t1 = int, class t2 = float, class t3 = char>
class harry{
    public:
    t1 a ;
    t2 b;
    t3 c;
    harry(t1 x, t2 y, t3 z){
        a = x;
        b = y;
        c = z;
    }
    void display(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
    }
};

int main(){
    harry <> h(7,6.4,'h');
    h.display();
    cout<<endl;
    harry <float, char, char> g(1.4, 'o', 'c');
    g.display();
    return 0;
}