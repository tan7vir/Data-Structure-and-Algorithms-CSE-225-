#include <iostream>
#include "stacktype.h"
#include "stacktype.cpp"

using namespace std;

// For First Method
template <class ItemType>
void printStack1(StackType<ItemType> s) {
    StackType<ItemType> temp;
    while ( !(s.IsEmpty())) {
        temp.Push( s.Top());
        s.Pop();
    }

    while ( !(temp.IsEmpty())) {
        cout << ( temp.Top()) << " ";
        s.Push(temp.Top());
        temp.Pop();
    }
    cout << endl;
}

// For second Method
template <class ItemType>
void printStack2 (StackType<ItemType> s) {
    if (!(s.IsEmpty())) {
        ItemType a = s.Top();
        s.Pop();
        printStack(s);
        cout << a << " ";
    }
    cout << endl;
}

template <class ItemType>
void checkFull( StackType<ItemType> S) {
    if ( S.IsFull() ) {
        cout << "Stack is Full" << endl;
    } else {
        cout << "Stack is not full" << endl;
    }
}

template <class ItemType>
void checkEmpty( StackType<ItemType> S) {
    if ( S.IsEmpty() ) {
        cout << "Stack is Empty" << endl;
    } else {
        cout << "Stack is non-Empty" << endl;
    }
}

int main()
{
    StackType<int> stack_one;
    checkEmpty (stack_one);

    stack_one.Push(5);
    stack_one.Push(7);
    stack_one.Push(4);
    stack_one.Push(2);

    checkEmpty(stack_one);
    checkFull(stack_one);

    // We can achieve the same thing using recursion.
    // However, recursion also utilizes a stack, so whatever we do,
    // compiler will use stack by using stack.
    // printStack2( stack_one ); -> For the second process.

    printStack1(stack_one);

    stack_one.Push(3);

    printStack1(stack_one);

    checkFull(stack_one);
    stack_one.Pop();
    stack_one.Pop();
    cout << stack_one.Top() << endl;

    string parenthesis;
    cin >> parenthesis;

    StackType<char> stack_two;

    for ( int i = 0; i < parenthesis.size(); i++) {

        if (parenthesis[i] == '(') {
            stack_two.Push(parenthesis[i]);
        } else {
            try {
                stack_two.Pop();
            } catch ( EmptyStack ) {
                cerr << "Not balanced";
                return 0;
            }
        }
    }

    if ( stack_two.IsEmpty()) {
        cout << "Balanced";
    } else {
        cout << "Not balanced";
    }

    return 0;
}
