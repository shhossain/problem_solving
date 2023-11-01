#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a;
        cin >> b;
        bool f = false;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == '0' && b[i] == '0' and a[i+1] == '1' and b[i+1] == '1'){
                f = true;
                break;
            }
        }

        if (f)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}