#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int p = 0, m = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '+')
            {
                p++;
            }
            else
            {
                m++;
            }
        }
        int mn = min(p, m);

        cout << n - (2 * mn) << endl;
    }

    return 0;
}