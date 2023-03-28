// For Task 1 and 2
#include <iostream>
#include "dynarr.h"
using namespace std;

int main()
{
    // Task 1.1
    dynArr object1(), object2(5);

    // Task 1.2
    cout << "Enter 5 int value: ";
    for ( int i = 0; i < 5; i++ ) {
        int temp;
        cin >> temp;
        object2.setValue (i, temp);
    }

    // Task 1.3
    cout << "The values are: ";
    for ( int i = 0; i < 5; i++ ) {
        cout << object2.getValue (i) << " " ;
    }

    // Task 2
    cout << "\nEnter new size of the array: ";
    int s;
    cin >> s;
    object2.allocate(s);
    cout << "Values of new array: ";
    for ( int i = 0; i < s; i++ ) {
        cout << object2.getValue (i) << " " ;
    }
    return 0;
}
