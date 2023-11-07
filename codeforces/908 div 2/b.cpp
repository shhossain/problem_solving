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
        int n, x;
        cin >> n;
        map<int, vector<int>> mi;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            mi[x].push_back(i);
        }
        vector<int> ans(n);
        int ct = 0;
        for (auto &i : mi)
        {
            if (i.second.size() < 2)
            {
                ans[i.second[0]] = 3;
            }
            else
            {
                int num = 2;
                if (ct)
                {
                    num = 3;
                }
                

                bool f = true;
                for (auto &&j : i.second)
                {
                    if (f){
                        ans[j] = 1;
                        f = false;
                    }else{
                        ans[j] = num;
                    }
                }
                ct++;
            }
        }

        if (ct < 2){
            cout << "-1" << endl;
        }else{
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
            
        }
    }

    return 0;
}