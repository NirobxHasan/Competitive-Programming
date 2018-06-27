#include <iostream>
#include "SortedType.cpp"

#include <list>
using namespace std;

int main()
{
    SortedType<int> sortedtype;
    std::list<int> myList;
    for (int i=0; i<5; i++) myList.push_back(i);
    cout<<"Size "<<myList.size();
    sortedtype.InsertItem(5);
    sortedtype.InsertItem(7);
    sortedtype.InsertItem(4);
    sortedtype.InsertItem(2);
    sortedtype.InsertItem(1);

    return 0;
}
