#include <iostream>
#include <climits>
#include <vector>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k;
        int arr[n];
        ll p = 1;
        int kp = 0;
        int e = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            arr[i] = x;
            p *= x;
            if (x == k)
            {
                kp = 1;
            }
            if (x % 2 == 0)
            {
                e++;
            }
        }
        if (p % k == 0 or kp == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            if (k == 2)
            {
                if (e == 0)
                {
                    cout << 1 << endl;
                }
                else
                {
                    cout << 0 << endl;
                }
            }
            else if (k == 3 or k == 5)
            {
                int mm = INT_MAX;
                for (int j = 1; j < 11; j++)
                {
                    k *= j;

                    for (int i = 0; i < n; i++)
                    {
                        if (arr[i] <= k)
                        {
                            mm = min(mm, k - arr[i]);
                        }
                    }
                }
                cout << mm << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}