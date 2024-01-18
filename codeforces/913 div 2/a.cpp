#include <iostream>
#include <vector>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n;
        vector<ll> ig;
        ll low = 1e9 + 1, high = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            if (a == 3)
            {
                ig.push_back(b);
            }
            else if (a == 2)
            {
                low = min(low, b);
            }
            else
            {
                high = max(high, b);
            }
        }

        cout << low << " " << high << endl;

        ll ad = 2;
        ll n1 = ig.size();
        for (int i = 0; i < ig.size(); i++)
        {
            if (ig[i] == low || ig[i] == high)
            {
                ad--;
            }
        }
        if (ad < 0)
        {
            ad = 0;
        }

        ll ans = ((high - low) - n1) + ad;
        if (ans < 0)
        {
            ans = 0;
        }
        cout << ans << endl;
    }

    return 0;
}