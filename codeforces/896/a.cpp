#include <iostream>
#define print(a, b) cout << a << " " << b << endl;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
        }

        if (n & 1)
        {
            cout << 4 << endl;
            print(1, n);
            print(2, n);
            print(1, 2);
            print(1, 2);
        }
        else
        {
            cout << 2 << endl;
            print(1, n);
            print(1, n);
        }
    }

    return 0;
}