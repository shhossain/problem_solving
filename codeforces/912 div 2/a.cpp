#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k;

        int sm = 1;
        int srt = 1;
        int prev = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (prev != -1)
            {
                if (prev != x)
                    sm = 0;
                if (prev > x)
                    srt = 0;
            }
            prev = x;
        }
        int f = 0;
        if (srt or sm)
        {
            f = 1;
        }
        else if (k > 1)
        {
            f = 1;
        }

        if (f)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}