#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(5, -1);     // create vector of size 5 and initialize it with -1, by default initialize with 0
    vector<int> newVector(v); // copy vector v to newVector
    v.push_back(5);
    v.pop_back();
    cout << "Capacity of Vector is: " << v.capacity() << endl;   // return total elements it can store
    cout << "Size of Vector is: " << v.size() << endl;           // return no. of elements stored
    cout << "Value at index 0 is: " << v.at(0) << endl;          // return element at index
    cout << "Is Vector Empty: " << v.empty() << endl;            // chect if vector is emty or not
    cout << "First Element of Vector is: " << v.front() << endl; // return first element
    cout << "Last Element of Vector is: " << v.back() << endl;   // return last element
    v.clear();                                                   // empty the vector but capacity  will remain allocated

    return 0;
}
