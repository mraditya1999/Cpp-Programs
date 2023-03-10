// stores only unique elements
// cannot modify elements after inserting
// return elements in sorted order
#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(53);
    s.insert(2);

    for (auto i : s)
        cout << i << endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    cout << s.count(5) << endl; // return true if element is present, else false

    set<int>::iterator itr = s.find(5); // return reference of 5
    cout << "Value present at itr " << *itr << endl;

    return 0;
}
