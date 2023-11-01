#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int caseNum = 1; caseNum <= T; ++caseNum) {
        int N, A, B;
        cin >> N >> A >> B;

        vector<int> P(N);
        for (int i = 0; i < N; ++i) {
            cin >> P[i];
        }

        sort(P.begin(), P.end());

        int left = 0, right = N - 1;
        int count = 0;

        while (left < right) {
            if (P[left] + P[right] >= A && P[left] + P[right] <= B) {
                count += (right - left);
                right--;
            } else if (P[left] + P[right] < A) {
                left++;
            } else {
                right--;
            }
        }

        cout << "Case " << caseNum << ": " << count << endl;
    }

    return 0;
}