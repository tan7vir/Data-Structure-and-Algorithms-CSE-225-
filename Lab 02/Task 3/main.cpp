// For Task 3
#include <iostream>
#include "dynarr.h"
using namespace std;

int main()
{
    // Task 3
    cout << "Enter row and column number: ";
    int row, column;
    cin >> row >> column;
    dynArr object1(row, column);
    cout << "Enter the values of the array: ";

    for ( int i = 0; i < row; i++) {
        for ( int j = 0; j < column; j++) {
            int temp; cin >> temp;
            object1.setValue (i, j, temp);
        }
     }

    cout << "Arrays values are: \n";
    for ( int i = 0; i < row; i++) {
        for ( int j = 0; j < column; j++) {
            cout << object1.getValue(i, j) << " ";
        } cout << endl;
     }

    return 0;
}

