# include <iostream>
using namespace std;

class point{
    int x,y;
    public:
    point(int a, int b){
        x = a;
        y = b;
    }
    void displaypoint(){
        cout<<"The points are ("<<x<<","<<y<<")"<<endl;
    }
};

int main(){
    point p(2,3);
    point q = point(7,9);
    p.displaypoint();
    q.displaypoint();
    return 0;
}