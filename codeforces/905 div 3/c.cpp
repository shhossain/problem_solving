#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int m = k;
        int e = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x%k==0)
                m = 0;
            if (x%2==0)
                e++;
            m = min(m, k - x%k);
        }
        
        if (k == 4){
            if (e >= 2)
                m = 0;
            if (e == 1) m = min(m, 1);
            else m = min(m, 2);
        }
        cout << m << endl;
    }
    
    return 0;
}