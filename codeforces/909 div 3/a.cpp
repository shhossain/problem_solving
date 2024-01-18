#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int f = 0;
        if (((a + 1) % 3 == 0) or ((a - 1) % 3 == 0))
        {
            f = 1;
        }

        if (f == 1)
        {
            cout << "First" << endl;
        }
        else
        {
            cout << "Second" << endl;
        }
    }

    return 0;
}