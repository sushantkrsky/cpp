# include <iostream>
using namespace std;

class base{
    protected: //PVT BUT CAN BE INHERITED BUT CANNOT ACCCESSIBLE
    int a;
    private:
    int b;
};
/*
For a protected member :-
                       Public derivation      Pvt derivation       Protected derivation
1. private members      NOT INHERITED         NOT INHERITED        NOT INHERITED
2. Protected members    PROTECTED             PRIVATE              PROTECTED
3. public members       PUBLIC                PRIVATE              PROTECTED
*/
class derived :  protected base{
};

int main(){
    base b;
    derived d;
    //cout<<b.a; //Since "a" is protected in base as well as derived ,it will not work
    return 0;
} 