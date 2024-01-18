#include <iostream>
#include <cctype>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        string t = s;
        vector<int> lidx;
        vector<int> uidx;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B')
            {
                // check if uidx is not empty
                if (!uidx.empty())
                {
                    // get last element of uidx
                    int idx = uidx.back();
                    uidx.pop_back();
                    t[idx] = 'B';
                }
            }
            else if (s[i] == 'b')
            {
                if (!lidx.empty())
                {
                    int idx = lidx.back();
                    lidx.pop_back();
                    t[idx] = 'B';
                }
            }
            else
            {
                if (isupper(s[i]))
                {
                    uidx.push_back(i);
                }
                else
                {
                    lidx.push_back(i);
                }
            }
        }

        for (int i = 0; i < t.size(); i++)
        {
            if (t[i] != 'B' and t[i] != 'b')
            {
                cout << t[i];
            }
        }
        cout << endl;
    }

    return 0;
}