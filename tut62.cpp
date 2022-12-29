                         //  ARROW OPERATOR //
# include <iostream>
using namespace std;

class complex{
    int real ,imaginary;
    public:
    void getdata(){
        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginary part is "<<imaginary<<endl;
    }
    void setdata(int a, int b){
        real = a;
        imaginary = b;
    }
};

int main(){
    complex c1;
    complex *ptr = &c1;
    //complex *ptr = new complex;
    c1.setdata(1,53);
    c1.getdata();
    (*ptr).setdata(1,54);
                     // ARROW OPERATOR //
    ptr->getdata();  // OR (Its like dereferencing something)
    (*ptr).getdata();
    return 0;
}