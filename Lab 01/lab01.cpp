#include <iostream>

using namespace std;

int main()
{
    //Task 1
    cout << "Enter the size of the array: " ;
    int size;
    cin >> size;

    int *array = new int[size]; // Creating dynamic array using new operator

    cout << "Enter the value of the array: ";

    for ( int i = 0; i < size; i++) {
        cin >> array[i];
    }

    cout << "The values are: ";
    for ( int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    delete array;

    // Task 2
    cout << "\n";
    cout << "Enter the row and column number: ";
    int row, column;
    cin >> row >> column;

    char **arr = new char*[row];

    for (int i = 0; i < row; i++) {
        arr[i] = new char[column];
    }

    cout << "Enter the value of the array: ";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "The value of the array: " << "\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << arr[i][j] << " ";
        } cout << "\n";
    }

    for (int i = 0; i < row; i++) {
        delete arr[i];
    }
    delete arr;

    // Task 3
    cout << "\n";
    cout << "Enter the row number: ";
    cin >> row;

    int temp[row];
    int **ar = new int*[row];

    for (int i = 0; i < row; i++) {
        cout << "Enter the row number for column " << i + 1 << ": ";
        cin >> column;
        temp[i] = column;
        ar[i] = new int[column];
        cout << "Enter the value for row " << i + 1 << ": ";
        for (int j = 0; j < column; j++) {
            cin >> ar[i][j];
        }
    }

    cout << "The values are: " << "\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < temp[i]; j++) {
            cout << ar[i][j] << " ";
        } cout << "\n";
    }

    for (int i = 0; i < row; i++) {
        delete ar[i];
    }
    delete ar;

    return 0;
}

