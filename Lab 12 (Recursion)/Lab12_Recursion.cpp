#include     <iostream>
#include      <math.h>
using        namespace std;

// One 
int fib ( int n ) {
    if ( n == 0 ) return 0;
    else if ( n == 1 ) return 1;
    return fib ( n - 1) + fib(n - 2);
}

// Two
int factorial ( int n ) {
    if ( n == 1 ) return 1;
    return n * factorial(n - 1);
}

// Three
int sumOfDigits(int x) {
    if ( x == 0) return 0;
    else {
        return x % 10 + sumOfDigits ( x /= 10);
    }
}

// Four
int findMin(int a[], int size) {
    if ( size == 0) return a[size];
    return min(a[size - 1], findMin(a, size - 1));
}

//Five
int DecToBin(int dec) {
    if ( dec == 0 ) return 0;    
    return dec % 2 + 10 * DecToBin ( dec / 2);
}

// Six
double sixsol ( int n ) {
    if ( n == 0) return 1;
    else return (float) 1 / pow (2, n) + sixsol(n - 1);
}



int main() {
    
    cout << "Q1: ";
    cout << "Enter the N: ";
    int n; cin >> n;
    cout << "Ans: " << fib ( n ) << endl;
    
    cout << "Q2: ";
    cout << "Enter the N: ";
    cin >> n;
    cout << "Ans: " << factorial ( n ) << endl;
    
    cout << "Q3: ";
    cout << "Enter the N: ";
    cin >> n;
    cout << "Ans: " << sumOfDigits ( n ) << endl;
    
    cout << "Q4: ";
    cout << "Enter the Size: ";
    cin >> n;
    cout << "Enter the array: " ;
    int arr[n];
    for ( int i = 0; i < n; i++) cin >> arr[i];

    cout << "Ans: " << findMin( arr, n) << endl;
    
    cout << "Q5: ";
    cout << "Enter decimal number: ";
    cin >> n;
    cout << "Ans: " << DecToBin ( n ) << endl;
    
    cout << "Q6: ";
    cout << "Enter the number: ";
    cin >> n;
    cout << "Ans: " << sixsol ( n ) << endl;
    return 0;
}


