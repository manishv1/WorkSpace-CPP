#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void printList(list<int> &l)
{
    cout << "List:-->";
    for (auto x : l)
    {
        cout << x << "-->";
    }
    cout << endl;
}

void printIterator(list<int> l)
{
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << "-->" << *it;
    }
}
// List in CPP STL is doubly linked list so it is printed both ways forward and backward
void printListReverseIterator(list<int> l)
{
    for(auto it = l.rbegin() ; it != l.rend(); it++)  // iterstor support only != and == comparison
    {
        cout<<"-->"<<*it;
    }
}


int main()
{

    list<int> l;
    for (int i = 0; i < 5; ++i)
    {
        l.push_back(i);
    }
    l.push_front(-1);
    l.push_back(10);
    printList(l);
    printIterator(l);
    // Inset after 3rd node
    cout << endl
         << endl;
    auto it = l.begin();
    it++;   // it = it +2 is invalid , only ++ and -- are valid
    l.insert(it, 100);
    printIterator(l);
    cout<<endl<<endl;
    printListReverseIterator(l);

    // find an element in list and remove it from list based on iterator
    // algorithm header file must be includede for find function to use 
    list<int>:: iterator it1 = std::find(l.begin(), l.end(), 3);

    if( it1 != l.end())
    {
        cout<<endl<<" Searched Great ..... Element... Exist in List ..."<<endl<<endl;
    }
   cout<<endl;
    l.remove(2);
    l.erase(it1);
    printIterator(l);
    return 1;
}