#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {3, 8 ,9, 7, 8, 2 , 3};
    list<int> l2(l);
    // option-2
    for(int val: l2)
    {
        cout << val << " ";
    }
    cout << endl;
}

