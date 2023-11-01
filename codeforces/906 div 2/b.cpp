#include <iostream>
using namespace std;

bool isGood(string &g)
{
    for (int i = 0; i < g.size() - 1; i++)
    {
        if (g[i] == g[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        string at;
        cin >> at;
        int ans = 1;
        if (isGood(s))
        {
            ans = 1;
        }
        else
        {
            if (!isGood(at))
            {
                ans = 0;
            }
            else
            {
                if (m > 1 && at[0] != at[m - 1])
                {
                    ans = 0;
                }
                else
                {
                    for (int i = 0; i < n - 1; i++)
                    {
                        if (s[i] == s[i + 1])
                        {
                            if (s[i] == at[0])
                            {
                                ans = 0;
                                break;
                            }
                        }
                    }
                }
            }
        }
        if (ans)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}