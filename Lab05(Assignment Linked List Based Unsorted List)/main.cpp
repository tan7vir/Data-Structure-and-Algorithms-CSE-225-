/*
    Here, the task is user will insert two list where both of them are already sorted.
    and we have to merge them in a new list and the time complexity can not be more than O(N).

    Here, we have to understand some thing that no sorting algorithm can sort two array or list in time 
    complexith of O(N). So, how can we do that. Well, here the main twist is we don't have to sort them.
    They are alredy sorted, right? The only thing we have to do is, we have to maintain a order.

    At first, we will take two variables and in this variables we will store the first element of the both 
    list. Then will camopare them. Like, think a and b are those two variable and we are storing the first
    index of list1 in a and list2 in b. If (a > b than we will push b in our new list JOIN and by calling 
    GetNextItem function we will store the second value og list2 in b if it exist. Now think, 
    should we Get the next item of list1 in a? No!!! we don't because we didnt push a in JOIN because 
    the second data of list2 still can be less than the first index of list1, like our list1 is {1, 2}
    and list2 = {3, 4} this theory is similar to TWO-POINTER-ALGORITHM, Here you can learn more about 
    this "https://www.geeksforgeeks.org/two-pointers-technique/". ) else ( we will insert a and will do 
    same stuffs as the previous). But think if a == b then? then we will insert both of them in JOIN
    and will call GetNextItem for both of them.

    now think if the size of both list dosen't match or one is totaly less than other what will happen?
    like list1 = {1, 2, 3} and list2 = {4, 5, 6}. At this time we have to do code a little more. After doing 
    above code we have to add 2 while loop for 2 list and we have to check that we have both of them fully.
    If one is not we have to input them individualy in JOIN. This time we don't need to cheek any condition.
    like if we think this senerio where list1 = {1, 2, 4} and list2 = {3, 5, 6} after the while loop at line 63
    our JOIN will be JOIN = {1, 2, 3, 4}. Here 2 value of list2 is missing so in the second while loop we have to 
    push them in JOIN. Now we don't need to compare with lsit1 because previously we did that. 

    Now our JOIN is ready to print. We have to simply print it. 🥳🥳🥳


*/



#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
using namespace std;

int main() {

    UnsortedType<int> list1, list2;                             // Declaring two list.
    int temp1, temp2;
    cin >> temp1;
    for (int i = 0; i < temp1; i++) {
        cin >> temp2;                                           // Taking input the data of first list.
        list1.InsertItem(temp2);                                // Inserting in the first list.
    }

    cin >> temp1;
    for (int i = 0; i < temp1; i++) {
        cin >> temp2;                                           // Taking input the data of second list.
        list2.InsertItem(temp2);                                // Inserting in the second list.
    }

    int value1, value2;
    int index1 = list1.LengthIs(), index2 = list2.LengthIs();
    list1.GetNextItem(value1);                                  // By calling GetNextItem function we are getting the first index of the list1.
    list2.GetNextItem(value2);                                  // same as list1.

    UnsortedType<int> join;                                     // Declaring the third list for sorting both list1 & list2.

    while (index1 > 0 and index2 > 0) {
        if (value1 > value2) {
            join.InsertItem(value1);
            index1--;
            if (index1 > 0)
                list1.GetNextItem(value1);
        } else if (value2 > value1) {
            join.InsertItem(value2);
            index2--;
            if (index2 > 0)
                list2.GetNextItem(value2);
        } else {
            join.InsertItem(value1);
            join.InsertItem(value2);
            index1--;
            index2--;
            if (index1 > 0)
                list1.GetNextItem(value1);
            if (index2 > 0)
                list2.GetNextItem(value2);
        }
    }

    while (index1 > 0) {
        join.InsertItem(value1);
        index1--;
        if (index1 > 0)
            list1.GetNextItem(value1);
    }

    while (index2 > 0) {
        join.InsertItem(value2);
        index2--;
        if (index2 > 0)
            list2.GetNextItem(value2);
    }

    int value_of_join;
    int index_of_join = join.LengthIs() - 1;

    while (index_of_join >= 0) {
        join.GetNextItem(value_of_join);
        cout << value_of_join << " ";
        index_of_join--;
    }
    cout << endl;
    return 0;
}
