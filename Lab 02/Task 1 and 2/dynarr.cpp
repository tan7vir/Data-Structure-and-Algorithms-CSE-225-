// For Task 1 and 2
#include "dynarr.h"
#include <iostream>
using namespace std;
dynArr::dynArr()
{
    data = NULL;
    size = 0;
}
dynArr::dynArr(int s)
{
    data = new int[s];
    size = s;
}
dynArr::~dynArr()
{
    delete [] data;
}
int dynArr::getValue(int index)
{
    return data[index];
}
void dynArr::setValue(int index, int value)
{
    data[index] = value;
}
void dynArr::allocate(int s) {
    int *temp = new int[s];
    int limit = ( s < size) ? s : size;

    for ( int i = 0; i < limit; i++) {
         temp[i] = data[i];
    }
    size = s;
    delete [] data;
    data = temp;
    temp = NULL;
}
