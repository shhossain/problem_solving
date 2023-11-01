#include <iostream>
#define ll long long
using namespace std;

ll digitSum(ll n)
{
    ll sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        while (1)
        {
            if (digitSum(n) % k == 0)
            {
                cout << n << endl;
                break;
            }
            else
            {
                n++;
            }
        }
    }

    return 0;
}