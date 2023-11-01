#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> operations;
        int p = 0;

        for (int i = 0; i < n / 2; i++) {
            if (s[i] == s[n - 1 - i]) {
                p++;
                operations.push_back(i + 1);
            }
        }

        if (p > 300) {
            cout << -1 << endl;
        } else {
            cout << p << endl;
            for (int i = 0; i < p; i++) {
                cout << operations[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}






