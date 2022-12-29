                           // MAP //
/*
Map is an associative array
*/
# include <iostream>
# include <map>
# include <string>
using namespace std;

int main(){
    map<string, int> marksmap;
    marksmap["harry"] = 98;
    marksmap["jack"] = 59;
    marksmap["rohan"] = 2;

    marksmap.insert({{"Kozume",16},{"Kuroo", 187}});
    map<string, int> :: iterator iter;
    for(iter=marksmap.begin(); iter!=marksmap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    cout<<"The size is "<<marksmap.size()<<endl;
    return 0;
}