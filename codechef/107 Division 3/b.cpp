#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s1, s2;
        cin >> n >> s1 >> s2;
        int ca = 0;
        int cf = 0;

        // rock r, paper p, scissors s
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == 'R')
            {
                if (s2[i] == 'P')
                {
                    ca++;
                }
                else if (s2[i] == 'S')
                {
                    cf++;
                }
            }
            else if (s1[i] == 'P')
            {
                if (s2[i] == 'S')
                {
                    ca++;
                }
                else if (s2[i] == 'R')
                {
                    cf++;
                }
            }
            else if (s1[i] == 'S')
            {
                if (s2[i] == 'R')
                {
                    ca++;
                }
                else if (s2[i] == 'P')
                {
                    cf++;
                }
            }
        }

        int ans = 0;
        if (cf > ca)
        {
            ans = 0;
        }
        else
        {
            while (cf <= ca)
            {
                ca--;
                cf++;
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}