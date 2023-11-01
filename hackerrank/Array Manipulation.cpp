#include <iostream>
#include <vector>
using namespace std;
const int N = 1e7 + 10;
long long int arr[N];

long arrayManipulation(int n, vector<vector<int>> queries)
{
    long long k, a, b, mx = -1;
    for (int i = 0; i < queries.size(); i++)
    {
        a = queries[i][0];
        b = queries[i][1];
        k = queries[i][2];
        arr[a] += k;
        arr[b + 1] -= k;
    }

    for (int i = 1; i <= n; i++)
    {
        arr[i] += arr[i - 1];
    }

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
        }
    }

    return mx;
}

int main()
{
    int n, q;
    cin >> n >> q;
    long long k, a, b, mx = -1;
    while (q--)
    {
        cin >> a >> b >> k;
        arr[a] += k;
        arr[b + 1] -= k;
    }

    for (int i = 1; i <= n; i++)
    {
        arr[i] += arr[i - 1];
    }

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
        }
    }

    cout << mx;

    return 0;
}