#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count; // BY DEFAULT Initialises with Zero
public:
    void setdata(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number "
             << count << endl;
    }
    static void getcount(void){
        cout<<"The value of count is "<<count<<endl;
    }
};

int employee ::count;
// COUNT is static data member of class employee
int main()
{
    employee harry, rohan, lovish;
    // harry.id = 1;  WE CAN'T DO THIS BCZ IT IS PRIVATE
    // harry.count = 1; WE CAN'T DO THIS BCZ IT IS PRIVATE
    harry.setdata();
    harry.getdata();
    employee :: getcount();

    rohan.setdata();
    rohan.getdata();
    employee :: getcount();

    lovish.setdata();
    lovish.getdata();
    employee :: getcount();

    return 0;
}
