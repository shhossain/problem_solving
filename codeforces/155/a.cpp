#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, w;
        cin >> n;
        cin >> s >> w;
        int v = s;
        int ww = w;
        int p = 0;
        for (int i = 1; i < n; i++)
        {
            cin >> s >> w;
            if (p == 0 && s >= v && w >= ww)
            {
                v = -1;
                p = 1;
            }
        }
        cout << v << endl;
    }

    return 0;
}