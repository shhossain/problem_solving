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
        int v = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n;i++){
            v++;
            if (v==arr[i]){
                v++;
            }
        }

        cout << v << endl;
    }
    
    return 0;
}