/*
Given an array of integers, find the equilibrium index.
An equilibrium index is an index such that the sum of elements at lower indexes is equal to
the sum of elements at higher indexes.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long int> a(n);
    for(int i =0; i <n; i++)
    {
        cin >> a[i];
    }
    vector<long long int> pre(n);
    pre[0] = a[0];
    for(int i = 1; i < n; i++)
    {
        pre[i] = pre[i-1] + a[i];
    }
    int eq_index = 0;
    for(int i = 1; i < n; i++)
    {
        long long  left = pre[i-1];
        long long right = pre[n-1] - pre[i];
        if(left == right)
        {
            eq_index = i;
            break;
        }
    }

    if(eq_index == 0)
    {
        cout << "There is no such index.\n";
    }
    else{
        cout << eq_index << endl;
    }
    return 0;
}



