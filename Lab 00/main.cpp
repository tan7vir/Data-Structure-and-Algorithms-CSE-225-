#include <iostream>
#include "Box.h"
using namespace std;

bool isPrime ( int n ) {
    bool flag = true;
    for ( int i = 2; i <= n / 2; i++) {
        if ( n % i == 0 ) {
            flag = false;
            break;
        }
    }
    return flag;
}

int main()
{
    int int1, int2;
    long long ans = 1;

    // Task 1

    cout << "Enter two integer variable: ";
    cin >> int1 >> int2;
    cout << "The sum is: " << int1 + int2 << "\n";

    // Task2
    // Factorial of a number greater than 20 is not possible to store in
    // a long long variable too.
    cout << "Enter a integer variable(<20): ";
    cin >> int1;

    for (int i = 1; i <= int1; i++) {
        ans *= i;
    }

    cout << ans << "\n";


    // Task 3

    cout << "Enter two integer variable: ";
    cin >> int1 >> int2;

    cout << "Choose an operator (+, -, *, /): ";
    char chara;
    cin >> chara;

    ans = 0;
    switch ( chara ) {

        case '+': {
            ans = int1 + int2;
            break;
        }
        case '-': {
            ans = int1 - int2;
            break;
        }
        case '*': {
            ans = int1 * int2;
            break;
        }
        case '/': {
            ans = int1 / int2;
            break;
        }
        default:
            cout << "Invalid operator." << "\n";
    }
    cout << "Result: " << ans << "\n";

    // Task 4

    cout << "Primes numbers between 300 and 500 are: ";
    for ( int i = 300; i <= 500; i++) {
        if ( isPrime(i) ) {
            cout << i << " ";
        }
    }
    cout << "\n";
    // OOP Task

    Box b1(2, 2, 2), b2 (3, 3, 3), b3 (4, 4, 4); // Creating three objects
    cout << "Box one volume: ";
    b1.volume();
    cout << "Box two volume: ";
    b2.volume();
    cout << "Box three volume: ";
    b3.volume();

    return 0;
}

