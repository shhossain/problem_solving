#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n;
        int v = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            double val = b / 2.0;
            int vali = b / 2;
            if (val != vali)
            {
                vali++;
            }
            if (v == 0 || (a + vali) < v)
            {
                v = a + vali;
            }
        }

        cout << v - 1 << endl;
    }

    return 0;
}