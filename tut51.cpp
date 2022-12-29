#include <iostream>
using namespace std;

// BASE CLASS
class employee
{
public:
    int id;
    float salary;
    employee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    }
    employee() {}
};

/* DERIVED CLASS
class {{derived-class-name}} : {{visibibility-mode}} {{base-class-name}}
{
    class member/methods/etc
}
NOTE :-
1. DEFAULT VISIBILITY MODE IS PRIVATE
2. PUBLIC VISIBILITY MODE - Public members of base class becomes public members
of the derived class
3. PRIVATE VISIBILITY MODE - Public members of base class becomes pvt members
of the derived class
4. PVT members of base class are never inherited
*/

// Creating a PROGRAMMER CLASS from EMPLOYEE BASE CLASS
class programmer : public employee
{ // NOW WE CAN ACCESS ID
public:
    programmer(int inpid)
    {
        id = inpid;
    }
    int languagecode = 9;
    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    programmer skillif(10);
    cout << skillif.languagecode << endl;
    cout << skillif.id << endl;
    skillif.getdata();
    return 0;
}