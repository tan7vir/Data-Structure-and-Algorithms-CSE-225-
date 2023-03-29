#include "studentInfo.h"
#include <iostream>
#include <string.h>
using namespace std;

// No argument Constructor
studentInfo::studentInfo () {
    ID = name = "Default";
    CGPA = 2.51;
}

// One argument constructor. By using this we can create object only the ID of the student.
studentInfo::studentInfo (string id) {
    ID = id;
    name = "Default";
    CGPA = 2.51;
}

// Three argument constructor.
studentInfo::studentInfo (string id, string n, double CG) {
    ID = id;
    name = n;
    CGPA = CG;
}

// For changing the ID.
void studentInfo::setID ( string id ) {
    ID = id;
}

// Printing the value.
void studentInfo::printStudentData() {
    cout << ID << ", " << name << ", " << CGPA << "\n";
}

// Operator overloading one
bool studentInfo::operator==(studentInfo st) {
    if ( ID == st.ID ) {
        return true;
    } else
        return false;
}

// Operator overloading two
bool studentInfo::operator!=(studentInfo st) {
    if ( ID == st.ID ) {
        return false;
    } else
        return true;
}
