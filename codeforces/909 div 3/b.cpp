#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i)
        {

            cin >> x;
            arr[i] = x;
        }
        sort(arr, arr + n);
        int div = -1;
        for (int i = 150000; i > 0; i--)
        {
            if (n % i == 0)
            {
                div = i;
                break;
            }
        }
        cout << "div: " << div << endl;

        vector<long long int> v;
        int j = 0;
        long long s = 0;
        for (int i = 0; i < n; i++)
        {
            s += arr[i];
            j++;
            if (j == div)
            {
                v.push_back(s);
                s = 0;
                j = 0;
            }
        }
        v.push_back(s);
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;

        sort(v.begin(), v.end());
        cout << v[v.size() - 1] - v[0] << endl;
    }

    return 0;
}