#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int o = 0, e = 0;
    int oi = -1, ei = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x & 1)
        {
            o++;
            if (oi == -1)
            {
                oi = i;
            }
        }
        else
        {
            e++;
            if (ei == -1)
            {
                ei = i;
            }
        }
    }

    if (o > e)
    {
        cout << ei + 1 << endl;
    }
    else
    {
        cout << oi + 1 << endl;
    }

    return 0;
}