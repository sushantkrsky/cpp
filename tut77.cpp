         // FUNCTION CAN BE CALLED OUTSIDE AND OVERLOADING FUNCTION TEMPLATE //
# include <iostream>
using namespace std;

template <class t>
class harry{
    public:
    t data;
    harry(t a){
        data = a;
    }
    void display();
};

template <class t>
void harry<t> :: display(){
        cout<<data<<endl;
}

void func(int a){
    cout<<"i am first func() "<<a<<endl;
}

template <class t>
void func(t a){
    cout<<"i am templatized func() "<<a<<endl;
}

int main(){
    harry<int> h(5);
    harry<char> g('d');
    harry<float> j(8.9);
    cout<<h.data<<endl;
    cout<<g.data<<endl;
    cout<<j.data<<endl;
    h.display();
    func(4); //Exact match takes the highest priority
    return 0;
}