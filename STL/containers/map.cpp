// key value pair
// key must be unique
// sorted order
#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> m;

    m[1] = "Aditya";
    m[2] = "Yadav";
    m[3] = "MCA";
    m.insert({4, "UIM"});

    for (auto i : m)
        cout << i.first << " " << i.second << endl;

    cout << m.count(4) << endl; // return true if element is present, else false
    m.erase(4);

    for (auto i : m)
        cout << i.first << " " << i.second << endl;

    auto it = m.find(3);
    for (auto i = it; i != m.end(); i++)
        cout << (*i).first << endl;

    return 0;
}
