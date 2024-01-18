#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int count = 0;
        int open = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '(')
            {
                open++;
            }
            else
            {
                if (open > 0)
                {
                    open--;
                    count++;
                }
            }
        }
        cout << (n - count * 2) / 2 << endl;
    }

    return 0;
}