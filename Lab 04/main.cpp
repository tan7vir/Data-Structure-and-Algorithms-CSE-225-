/*
    Read the Q carefully.
    And necessary explanation has given in each line.
*/
#include <iostream>
#include <string.h>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
#include "studentInfo.h"

using namespace std;

// When I will call the printI function with an object of studentType class
// There will be another function with same name but different parameter. That is
// an example of Function overloading.
void printI (studentInfo s) {
    s.printStudentData();           // This call the printStudentData function for printing
}

// This printI function will execute when I will call with a parameter of ItemType but not studentType
template <class ItemType>
void printI (ItemType I) {
    cout << I << " ";
}

template <class ItemType>
void printlist (UnsortedType<ItemType> list) {                  // This function print all the value of the list it takes only one parameter
    list.ResetList();                                           // This function reset the current position of the list.
    int len = list.LengthIs();              // This function return the current size of the list.

    for ( int i = 0; i < len; i++) {        // In this for loop we are printing the values of the list using GetNextItem function.
        ItemType temp;
        list.GetNextItem(temp);
        printI(temp);                       // Here, there are two function with the same name.
    } cout << "\n";
}

// This function will search a Variable and it will print is it found or not.
template <class ItemType>
ItemType isThere( ItemType temp, UnsortedType<ItemType> list) {
    bool found = false;

    list.RetrieveItem(temp, found);

    if ( found ) {
        cout << "Item is found." << "\n";
    } else {
        cout << "Item is not found" << "\n";
    }
    return temp;
}

int main()
{
    UnsortedType <int> list;                // Creating a unsorted list of int type.

    list.InsertItem(5);                     // Inserting in list.
    list.InsertItem(7);
    list.InsertItem(6);
    list.InsertItem(9);

    printlist(list);                        // This function print the all value in list.

    cout << "Length of the List: " << list.LengthIs() << "\n";

    list.InsertItem(1);

    printlist(list);

    isThere(4, list);
    isThere(5, list);
    isThere(9, list);
    isThere(10, list);

    if ( list.IsFull()) {
        cout << "List is Full" << "\n";
    } else {
        cout << "List is not Full" << "\n";
    }

    list.DeleteItem(5);
    printlist(list);

    if ( list.IsFull()) {
        cout << "List is Full" << "\n";
    } else {
        cout << "List is not Full" << "\n";
    }

    list.DeleteItem(1);
    printlist(list);

    list.DeleteItem(6);
    printlist(list);

    studentInfo s1("15234", "Jon", 2.6),            // Creating 5 object of studentInfo class.
    s2("13732", "Tyrion", 3.9),
    s3("13569", "Sandor", 1.2),
    s4("15467", "Ramsey2", 3.1),
    s5("16285", "Arya", 3.1);

    UnsortedType<studentInfo> students;
    students.InsertItem(s1);
    students.InsertItem(s2);
    students.InsertItem(s3);
    students.InsertItem(s4);
    students.InsertItem(s5);

    studentInfo temp("15467");
    students.DeleteItem(temp);

    temp.setID("13569");

    temp = isThere(temp, students);

    temp.printStudentData();

    printlist (students);
    return 0;
}
