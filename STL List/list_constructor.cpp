#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l(10, 3);
    // option-1
    for(auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // option-2
    for(int val: l)
    {
        cout << val << " ";
    }
    cout << endl;
}
