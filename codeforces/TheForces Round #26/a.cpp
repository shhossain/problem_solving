#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i=0; i<n; i++)
            cin >> arr[i];
        
        int ans = 0;
        for (int i = 0; i < n/2; i++)
        {

            ans = max(ans, abs(arr[i] - arr[n / 2 + i]));
        }

        cout << ans << endl;
        
    }
    
    return 0;
}