                                      // FUNCTION TEMPLATE //
# include <iostream>
using namespace std;

// float funcaverage(int a, int b){
//     float avg = (a+b)/2;
//     return avg;
// }

// float funcaverage2(int a, float b){
//     float avg = (a+b)/2;
//     return avg;
// }

template <class t1, class t2>
float funcaverage(t1 a, t2 b){
    float avg = (a+b)/2;
    return avg;
}

template <class t>
t swapp(t &a, t &b){
    t temp = a;
    a = b;
    b = temp;
}

int main(){
    float a;
    a = funcaverage(5,7);
    cout<<a<<endl;
    int x = 5, y = 7;
    swapp(x,y);
    cout<<x<<endl<<y;
    return 0;
}