#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int z = 0, o = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                z++;
            else
                o++;
        }

        int t = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                if (o == 0)
                    break;
                else
                {
                    o--;
                    t++;
                }
            }
            else
            {
                if (z == 0)
                    break;
                else
                {
                    z--;
                    t++;
                }
            }
        }

        cout << s.size() - t << endl;
    }

    return 0;
}