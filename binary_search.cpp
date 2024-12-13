// binary search is algorithm to searching from a sorted array in a optimzed way
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i =0; i <n; i++)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    while(q--)
    {
        int flag = 0;
        int num;
        cin >> num;
        int l = 0, r = n-1;
        while(l <= r)
        {
            int mid = (l+r)/2;
            if(mid == num)
            {
                flag = 1;
                break;
            }
            else if(mid > num)
            {
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }

        if(flag == 1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}



