#include <iostream>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; } //FOR EVERY OBJECTS,COUNTER IS TAKEN 0
    void setprice(void);
    void displayprice(void);
};

void shop ::setprice(void)
{
    cout << "Enter the ID of your item no " << counter + 1 << endl;
    cin >> itemid[counter]; //ID IS SET AT INDEX COUNTER
    cout << "Enter the item price" << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Price of item with itemid " << itemid[i] << " is " << itemprice[i] << endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();

    return 0;
}