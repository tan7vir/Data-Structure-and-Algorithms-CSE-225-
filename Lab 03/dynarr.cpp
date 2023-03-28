#include "dynarr.h"
#include <iostream>
using namespace std;

template <typename ItemType>
dynArr<ItemType>::dynArr(int s)
{
    data = new ItemType[s];
    size = s;
}
template <typename ItemType>
dynArr<ItemType>::~dynArr()
{
    delete [] data;
}
template <typename ItemType>
ItemType dynArr<ItemType>::getValue(int index)
{
    return data[index];
}
template <typename ItemType>
void dynArr<ItemType>::setValue(int index, ItemType value)
{
    data[index] = value;
}
template class dynArr<int>;
template class dynArr<double>;
