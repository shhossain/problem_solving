#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        if (b <= a)
        {
            cout << a << endl;
        }
        else
        {
            int v = b - a;
            if (k < v)
            {
                cout << b + (v - k) << endl;
            }
            else
            {
                cout << b << endl;
            }
        }
    }

    return 0;
}