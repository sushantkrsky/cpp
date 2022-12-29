//MULTILEVEL INHERITANCE
# include <iostream>
using namespace std;

class student{
    protected :
    int rollnumber;
    public :
    void setrollnumber(int);
    void getrollnumber(void);
};
void student :: setrollnumber(int r){
    rollnumber = r;
}
void student :: getrollnumber(){
    cout<<"Roll Number is "<<rollnumber<<endl;
}

class exam : public student{
    protected:
    float maths;
    float physics;
    public :
    void setmarks(float,float);
    void getmarks(void);
};
void exam :: setmarks(float m1,float m2){
    maths = m1;
    physics = m2;
}
void exam :: getmarks(void){
    cout<<"Maths marks is "<<maths<<" and physics marks is "<<physics<<endl;
}

class result : public exam{
    float percentage;
    public:
    void display(){
        getrollnumber();
        getmarks();
        cout<<"Your percentage is "<<(maths+physics)/2<<endl;
    }
};

int main(){
    result harry;
    harry.setrollnumber(420);
    harry.setmarks(94,90);
    harry.display();
    return 0;
}
/*
NOTES :- 
  If we are inheriting B from A and C from B , then
  1. A is a base class of B and B is a base class of C
  2. ABC is called inheritance path
*/