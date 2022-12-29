                     // VIRTUAL BASE CLASS //
/*
A(contains a) --(inheritance) B(contains a) and C(contains a)
B(contains a) and C(contains a) -- D(which a would it receieve)
In these cases, virtual base class theory is used  
*/
# include <iostream>
using namespace std;

/*
STUDENT << TEST AND SPORTS 
TEST + SPORTS = RESULT
*/

class student{
    protected:
    int rollno;
    public:
    void setnumber(int a){
        rollno = a;
    }
    void printnumber(void){
        cout<<"Your roll number is "<<rollno<<endl;
    }
};

class test : virtual public student{
    protected:
    float maths;
    float physics;
    public:
    void setmarks(float m1,float m2){
        maths = m1;
        physics = m2;
    }
    void printmarks(){
        cout<<"Your maths marks is: "<<maths<<endl;
        cout<<"Your physics marks is: "<<physics<<endl;
    }
};

class sports : virtual public student{
    protected:
    float score;
    public:
    void setscore(float sc){
        score = sc;
    }
    void printscore(void){
        cout<<"Your PT score is: "<<score<<endl;
    }
};

class result : public test, public sports{
    private:
    float total;
    public:
    void display(void){
        total = physics + maths + score;
        printnumber();
        printmarks();
        printscore();
        cout<<"Your total score is: "<<total<<endl;
    }
};

int main(){
    result harry;
    harry.setnumber(2);
    harry.setmarks(78,66);
    harry.setscore(23);
    harry.display();
    return 0;
}