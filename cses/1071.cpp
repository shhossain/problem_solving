#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        int f = 0;
        if (x > y)
        {
            ll tmp = x;
            x = y;
            y = tmp;
            f = 1;
        }

        ll ans = y * y;
        if (f == 0)
        {
            ans = (ans - (3 + y)) + (x - 1);
        }
        else
        {
            ans += (x - 1);
        }

        cout << ans << endl;
    }

    return 0;
}