#include <iostream>
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
        int i = 0;
        int ct = 0;
        while (i < n)
        {
            if (s[i] == 'B')
            {
                ct++;
                i += k;
            }
            else
            {
                i++;
            }
        }
        cout << ct << endl;
    }
    return 0;
}