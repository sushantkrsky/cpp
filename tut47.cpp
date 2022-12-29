# include <iostream>
using namespace std;

class simple{
    int data1;
    int data2;
    public:
    simple(int a, int b=9){ //BY DEFAULT
        data1 = a;
        data2 = b;
    }
    void printdata();
};

void simple :: printdata(){ //CALL BY REFERENCE
    cout<<"Given value of data is is "<<data1<<" and "<<data2<<endl;
}

int main(){
    simple s1(1,4);
    s1.printdata();
    simple s2(1);
    s2.printdata();
    return 0;
}
