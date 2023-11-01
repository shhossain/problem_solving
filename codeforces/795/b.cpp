#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n;
        map<int, int> m;
        map<int, vector<int>> m2;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            m[a]++;
            m2[a].push_back(i);
        }

        // for (auto &&i : m)
        // {
        //     cout << i.first << " " << i.second << endl;
        // }

        // for (auto &&i : m2)
        // {
        //     cout << i.first << "\t";
        //     for (auto &&j : i.second)
        //     {
        //         cout << j << " ";
        //     }
        //     cout << endl;
        // }

        int arr[n];
        int c = 0;
        for (auto &&i : m)
        {
            int ct = i.second;
            if (ct == 1)
            {
                c = -1;
                break;
            }
            else
            {
                vector<int> ar = m2[i.first];
                int s = ar[0];
                int e = ar[ar.size() - 1];

                int j = 1;
                for (int i = s + 1; i <= e; i++)
                {
                    arr[i] = ar[j - 1];
                    j++;
                }
                arr[s] = e;
            }
        }

        if (c == -1)
        {
            cout << -1 << endl;
        }
        else
        {

            for (int i = 0; i < n; i++)
            {
                cout << arr[i] + 1 << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}