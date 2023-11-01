#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> v;
        vector<pair<int, int>> p;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % k == 0)
            {
                v.push_back(i);
            }
            else
            {
                p.push_back({a[i] % k, i});
            }
        }

        sort(p.begin(), p.end(), [](pair<int, int> a, pair<int, int> b)
             {
            if (a.first == b.first){
                return a.second < b.second;
            }else{
                return a.first > b.first;
            } });

        for (auto &&i : p)
        {
            v.push_back(i.second);
        }

        for (auto &&i : v)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}