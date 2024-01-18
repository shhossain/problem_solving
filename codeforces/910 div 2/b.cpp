#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int mn = arr[0];
        int mx = arr[n-1];

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int v = 0;
            if (n-i){
                v += abs(arr[i] - mn);
            }else{
                v += abs(arr[i] - mx);
            }
            ans += v;
        }
        cout << ans << endl;
        }

    return 0;
}