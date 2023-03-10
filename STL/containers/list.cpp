#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l(5, 1);    // create list of size 5 and initialize it with -1, by default initialize with 0
    list<int> newList(l); // copy list v to newList
    l.push_back(2);
    l.push_front(2);
    l.pop_back();
    l.pop_front();
    cout << "Size of list is: " << l.size() << endl;           // return no. of elements stored
    cout << "Is list Empty: " << l.empty() << endl;            // chect if list is emty or not
    cout << "First Element of list is: " << l.front() << endl; // return first element
    cout << "Last Element of list is: " << l.back() << endl;   // return last element
    l.erase(l.begin(), l.end());                               // empty the list but capacity  will remain allocated
    return 0;
}
