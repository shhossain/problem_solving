#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> m;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            m[x]++;
        }
        int ans = 1;
        if (m.size() > 2)
        {
            ans = 0;
        }
        else if (m.size() == 2)
        {
            int a = 0, b = 0;
            for (auto i : m)
            {
                if (a == 0)
                {
                    a = i.second;
                }
                else
                {
                    b = i.second;
                }
            }

            int d = abs(a - b);
            if (d > 1)
            {
                ans = 0;
            }
        }

        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}