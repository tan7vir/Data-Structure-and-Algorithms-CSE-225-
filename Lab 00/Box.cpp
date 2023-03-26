#include "Box.h"
#include <iostream>
using namespace std;

Box::Box() {
    height = width = depth = 0;
}

Box::Box (int h, int w, int d ) {
    height = h;
    width = w;
    depth = d;
}

Box::~Box() {

}

void Box::volume ( ) {
    cout << height * width * depth << "\n";
}


