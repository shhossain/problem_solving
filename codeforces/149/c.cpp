#include <iostream>
#define loop(a, s, e) for (int a = s; a < e; a++)
#define rloop(a, s, e) for (int a = s; a >= e; a--)
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int ct = 0;
        char p = '3';
        loop(i, 0, n)
        {
            if (p != '3' and s[i] == '?')
            {
                s[i] = p;
            }
            if (s[i] != '?')
            {
                ct++;
                p = s[i];
            }
        }
        p = '3';
        rloop(i, n - 1, 0)
        {
            if (p != '3' and s[i] == '?')
            {
                s[i] = p;
            }
            if (s[i] != '?')
            {
                ct++;
                p = s[i];
            }
        }

        if (ct > 0)
        {
            cout << s << endl;
        }
        else
        {
            loop(i, 0, n)
            {
                cout << 0;
            }
            cout << endl;
        }
    }

    return 0;
}