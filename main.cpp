#include"timeStamp.h"
#include"SortedType.h"
#include"SortedType.cpp"
#include"unsortedType.h"
#include"unsortedType.cpp"
#include <iostream>
using namespace std;

int main()
{
    SortedType <int> st;
    st.InsertItem(5);
    st.InsertItem(7);
    st.InsertItem(4);
    st.InsertItem(2);
    st.InsertItem(1);

    cout << "Length: " << st.LengthIs() << "\n";
    cout << "List is: " ;

    int val = 0;
    do {
        val++;
        int it;
        st.GetNextItem(it);
        cout << it << " ";
    } while ( val < st.LengthIs() );
    cout << "\n";

    int temp = 6;
    bool flag = false;
    st.RetrieveItem( temp, flag);

    if ( flag ) {
        cout << "Item Found " << "\n";
    } else {
        cout << "Item Not Found" << "\n";
    }

    temp = 5;
    flag = false;
    st.RetrieveItem(temp, flag);

    if ( flag ) {
        cout << "Item Found " << "\n";
    } else {
        cout << "Item Not Found" << "\n";
    }

    if (st.IsFull() ) {
        cout << "List is Full" << "\n";
    } else {
        cout << "List is not Full" << "\n";
    }

    st.DeleteItem(1);

    cout << "List is: " ;

    st.ResetList();
    val = 0;
    do {
        val++;
        int it;
        st.GetNextItem(it);
        cout << it << " ";
    } while ( val < st.LengthIs() );
    cout << "\n";

    if (st.IsFull() ) {
        cout << "List is Full" << "\n";
    } else {
        cout << "List is not Full" << "\n";
    }


    UnsortedType<TimeStamp> List;
    List.InsertItem(TimeStamp(15,34,23));
    List.InsertItem(TimeStamp(13,13,02));
    List.InsertItem(TimeStamp(43,45,12));
    List.InsertItem(TimeStamp(25,36,17));
    List.InsertItem(TimeStamp(52,02,20));

    List.DeleteItem(TimeStamp(25,36,17));
    TimeStamp x;
    int len = List.LengthIs();
    cout << "Time List is: " << "\n";
    for(int i = 0; i < len; i++)
    {
        List.GetNextItem(x);
        x.Print();
    }
    return 0;
}
