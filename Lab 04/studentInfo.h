#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED
#include <iostream>
#include <string.h>
using namespace std;

class studentInfo {
    private:
    string name, ID;
    double CGPA;

    public:
    studentInfo ();
    studentInfo (string);
    studentInfo (string, string, double);
    void setID ( string );
    void printStudentData();
    bool operator==(studentInfo);
    bool operator!=(studentInfo st);
};


#endif // STUDENTINFO_H_INCLUDED
