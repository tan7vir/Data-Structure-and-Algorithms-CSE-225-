#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    cout << "Enter the Real and Imaginary number of A: ";
    double real, imaginary; cin >> real >> imaginary;
    Complex a(real, imaginary);

    cout << "Enter the Real and Imaginary number of B: ";
    cin >> real >> imaginary;
    Complex b(real, imaginary);

    cout << "Ans of A + B:" << "\n";
    (a + b).Print();

    cout << "Ans of A - B:" << "\n";
    (a - b).Print();

    cout << "Ans of A * B:" << "\n";
    (a * b).Print();

    cout << "Checking whether A != B" << "\n";
    if ( a != b) {
        cout << "Not equal." << "\n";
    } else {
        cout << "Equal." << "\n";
    }
    return 0;
}
