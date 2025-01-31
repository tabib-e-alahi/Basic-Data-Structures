#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10,20,30,40,20,20,70};
    // list<int> l2 = {100,200};
    // vector<int> v = {2,3,4};
    // list<int> l2;
    // l2 = l;
    // l2.assign(l.begin(),l.end());

    // l.push_back(40); //insert at tail
    // l.push_front(100); // insert at head

    // l.pop_back(); // delete from tail
    // l.pop_front(); // delete from head

    //insert at specific position
//    l.insert(next(l.begin(), 2),100);
// inserting multiple element
    //l.insert(next(l.begin(),2), l2.begin(),l2.end());
    //l.insert(next(l.begin(),2), v.begin(),v.end()); // also can add vector to list

    //delete element from a specific position:
    //l.erase(next(l.begin(),3));
    // multiple value erase:
    // l.erase(next(l.begin(),2), next(l.begin(),5));

    // cout << *next(l.begin(),1);


    // replace(l.begin(), l.end(),20,100);

    auto it = find(l.begin(), l.end(), 20);
    if(it == l.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    for(int val : l)
    {
        cout << val << endl;
    }
    return 0;
}
