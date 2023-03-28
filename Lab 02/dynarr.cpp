// For Task 3
#include "dynarr.h"
#include <iostream>
using namespace std;
dynArr::dynArr()
{
    data = NULL;
    row = column = 0;
}
dynArr::dynArr(int r, int c)
{
    data = new int*[r];
    for ( int i = 0; i < r; i++) {
        data[i] = new int[c];
    }
    row = r;
    column = c;
}
dynArr::~dynArr()
{
    for ( int i = 0; i < row; i++ ) {
        delete data[i];
    }
    delete [] data;
}
int dynArr::getValue(int r, int c)
{
    return data[r][c];
}
void dynArr::setValue(int r, int c, int value)
{
    data[r][c] = value;
}
