#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k;
        int ct = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - k + 1; i++)
        {
            for (int j = 0; j < k; j++)
            {
                if (arr[i + j] & 1)
                {
                    ct++;
                    break;
                }
            }
        }
        cout << ct << endl;
    }

    return 0;
}