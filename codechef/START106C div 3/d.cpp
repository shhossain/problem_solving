#include <iostream>
#include <algorithm>
using namespace std;



int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x, y;
        cin >> n >> m;
        cin >> x >> y;

        int v1 = 0; // x+1
        v1 += (x + 1) - 1;
        v1 += m - 
        int v = n - (x+1);
        v1 += m * v;

        int v2 = 0; // x-1
        v2 += (x - 1) - 1;
        v = n - (x - 1);
        v2 += m * v;
    }

    return 0;
}