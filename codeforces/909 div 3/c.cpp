#include <iostream>
#include <climits>
#define ll long long
using namespace std;

ll kd(ll arr[], int l, int r)
{
    ll m = LLONG_MIN, s = 0;
    for (int i = l; i <= r; i++)
    {
        s = s + arr[i];
        if (s > m)
        {
            m = s;
        }
        if (s < 0)
        {
            s = 0;
        }
    }
    return m;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll m = LLONG_MIN;
        int f = 0;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] % 2 == arr[i - 1] % 2)
            {
                m = max(m, kd(arr, f, i - 1));
                f = i;
            }
        }
        m = max(m, kd(arr, f, n - 1));
        cout << m << endl;
    }

    return 0;
}