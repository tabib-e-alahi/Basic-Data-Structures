#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {20,30,10,50,30,60,60,10};

    l.remove(10); // will remove all 10 from the list;

    // sorting function
    l.sort(); // ascending
    l.sort(greater<int>());//descending
    for(int x: l)
    {
        cout << x << " ";
    }
}
