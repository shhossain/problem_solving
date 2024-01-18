#include <iostream>
using namespace std;

int point(char c, int i, string s)
{
    int count = 0;
    for (int j = i + 1; j < s.length(); j++)
    {
        if (s[j] == 'B')
            count++;
    }
    if (c == 'B')
    {
        count += i + 1;
    }
    return count;
}

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

        int ct = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
                ct++;
        }
        if (ct == k)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
            for (int i = 0; i < n; i++)
            {
                if (point('A', i, s) == k)
                {
                    cout << i + 1 << " "
                         << "A" << endl;
                    break;
                }
                else if (point('B', i, s) == k)
                {
                    cout << i + 1 << " "
                         << "B" << endl;
                    break;
                }
            }
        }
    }

    return 0;
}