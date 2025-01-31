#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {20,30,10,50,30,60,60,10};

    cout << l.back() << endl; // return the list tail

    cout << l.front() << endl; // return the list head

    //access i-th element
//    cout << *next(l.begin(), i);
      cout << *(next(l.begin(), 3)) << endl;
}
