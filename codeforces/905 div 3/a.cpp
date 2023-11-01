#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[4];
        string s;
        cin >> s;
        for (int i = 0; i < 4; i++)
        {
            if (s[i] == '0')
            {
                a[i] = 10;
            }
            else
            {
                a[i] = s[i] - '0';
            }
        }

        int tm = 0;
        int c = 1;
        for (int i = 0; i < 4; i++)
        {
            int cur = a[i];
            int d1 = abs(cur - c);
            tm += d1;
            tm++;
            c = cur;
        }
        cout << tm << endl;
    }

    return 0;
}