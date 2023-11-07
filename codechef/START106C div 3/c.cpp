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
        int b = 0;
        if (n == 1 or n % 2 == 0)
        {
            b = 1;
        }

        if (b == 1)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
        }
    }

    return 0;
}