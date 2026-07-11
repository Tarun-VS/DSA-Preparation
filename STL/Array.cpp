/*
STL - Array

Topic:
Standard Template Library (STL)

Functions Used:
size()  : Returns the number of elements.
at()    : Accesses the element at a given index.
empty() : Checks whether the array is empty.
front() : Returns the first element.
back()  : Returns the last element.

Time Complexity:
size()  : O(1)
at()    : O(1)
empty() : O(1)
front() : O(1)
back()  : O(1)

Space Complexity: O(1)
*/

#include <iostream>
#include <array>
using namespace std;

int main() {

    array<int, 4> a = {1, 2, 3, 4};

    int size = a.size();

    cout << "Elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }

    cout << endl;

    cout << "Element at index 2: " << a.at(2) << endl;
    cout << "Is array empty? " << a.empty() << endl;
    cout << "First Element: " << a.front() << endl;
    cout << "Last Element: " << a.back() << endl;

    return 0;
}
