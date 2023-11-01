#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        map<char, int> m;
        for (auto &&i : s)
        {
            m[i]++;
        }


        int ct = 0;
        for (auto &&i : m)
        {
            if (i.second & 1)
                ct++;
        }

        if (ct == 1)
            ct = 0;
        else
            ct--;

        if (k >= ct and k <= n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}