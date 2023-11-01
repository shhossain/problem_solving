#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int r1[n];
        int r2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> r1[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> r2[i];
        }

        sort(r1, r1 + n);
        sort(r2, r2 + n);

        int b = 1;
        if (r1[0] > r2[0]){
            b = 2;
        }

        long long s = 0;
        long long s2 = 0;
        for (int i = 0; i < n; i++)
        {
            s += r1[0] + r2[i];
        }
    
        for (int i = 0; i < n; i++)
        {
            s2 += r2[0] + r1[i];
        }

        long long v = s2 > s ? s : s2;

        cout << v << endl;
    }
    
    return 0;
}