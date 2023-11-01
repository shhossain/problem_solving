#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int c = 0;
        for (int i = 1; i <= n; i+=2)
        {
            for (int j = i; j <= n; j *= 2)
            {
                a[c++] = j;
            }
        }
        for (auto &i : a)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}