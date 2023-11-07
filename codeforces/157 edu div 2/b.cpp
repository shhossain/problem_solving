#include <iostream>
#include <algorithm>
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
        int arr[n * 2];
        for (int i = 0; i < n * 2; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n * 2);
        int d = 0;
        for (int i = 0; i < n - 1; i++)
        {
            d += abs(arr[i] - arr[i + 1]);
            d += abs(arr[n + i] - arr[n + i + 1]);
        }
        cout << d << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " " << arr[i + n] << endl;
        }
        
    }

    return 0;
}