                    // TEMPLATE WUTH MULTIPLE PARAMETERS //
# include <iostream>
using namespace std;

/* SYNTAX :-
     template<class T1, class T2>
     class nameofclass{
        BODY
     };
*/

template<class t1, class t2>
class myclass{
    public:
    t1 data1;
    t2 data2;

    myclass(t1 a, t2 b){
        data1 = a;
        data2 = b;
    }
    void display(){
        cout<<this->data1<<endl<<this->data2;
    }
};

int main(){
    myclass<char ,float> obj('b',7.9);
    obj.display();

    return 0;
}