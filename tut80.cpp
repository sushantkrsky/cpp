                          // LISTS IN STL //
/*
List is used where we have to delete element from the middle or insertion/deletion
is fast.
bidirectional
if we want access to be fast,array is used
*/
# include <iostream>
# include <list> 
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for( it=lst.begin(); it!= lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> list1; //List of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    display(list1);
    list1.pop_front(); //Removes from front
    display(list1);
    list1.remove(9); //Removes from anywhere
    display(list1);

    list<int> list2(3); //Empty list of size 3
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    display(list2);

    // Merging the list
    list1.merge(list2);
    cout<<"List 1 After merging: ";
    display(list1);

    //Sorting the list
    list1.sort();
    display(list1);

    //Reversing the list
    list1.reverse();
    display(list1);

    return 0;
}