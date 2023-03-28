#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
template <typename ItemType>
class dynArr
{
private:
    ItemType *data;
    int size;
public:
    dynArr(int);
    ~dynArr();
    void setValue(int, ItemType);
    ItemType getValue(int);
};
#endif // DYNARR_H_INCLUDED
