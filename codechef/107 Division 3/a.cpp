#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int mins = a * b;
        if (mins > c*1440){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
    
    return 0;
}