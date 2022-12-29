# include <iostream>
# include <cmath>
using namespace std;

class point1{
    public:
    int x1 ,y1;
    point1(int a, int b){
        x1 = a;
        y1 = b;
    }
    void displaypoint1(){
        cout<<"Given point is: ("<<x1<<","<<y1<<")"<<endl;
    }
};
class point2{
    public:
    int x2 ,y2;
    point2(int c, int d){
        x2 = c;
        y2 = d;
    }
    void displaypoint2(){
        cout<<"Given point is: ("<<x2<<","<<y2<<")"<<endl;
    }
};

class distances : public point1,  public point2{
    void dis(void){
        int d;
        d = sqrt(((x2-x1)*(x2-x2))+((y2-y1)*(y2-y1)));
        cout<<"The distance between two given points is "<<d<<endl;
    }
};

int main(){
    point1 p1(1,1);
    point2 p2(1,1);
    p1.displaypoint1();
    p2.displaypoint2();
    distances *d;
    return 0;
}