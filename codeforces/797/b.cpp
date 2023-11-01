#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar1[n];
        int ar2[n];

        for (int i = 0; i < n; i++)
        {
            cin >> ar1[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> ar2[i];
        }

        int mx=0;
        map<int,int>mp;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(ar1[i]<ar2[i])ans=1;
            else
            {
                if(ar2[i]==0)
                {
                    mx=max(mx,ar1[i]);
                }
                else
                {
                    int dif=ar1[i]-ar2[i];
                    mp[dif]++;
                }
            }
        }
        int x=-1;
        for(auto it:mp)
        {
            x = it.first;
        }
        if(mp.size()>1)ans=1;
        if(x!=-1 && mx>x)ans=1;

        if (ans != 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}