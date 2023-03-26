#ifndef BOX_H_INCLUDED
#define BOX_H_INCLUDED

class Box {
    private:
        int height, width, depth;
    public:
        Box();
        Box (int, int, int);
        ~Box();
        void volume();
};
#endif // BOX_H_INCLUDED
