#include <iostream>
#include <set>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    set<char> ss;
    for (char i : s)
    {
        ss.insert(i);
    }

    // cout << ss.size() << endl;
    if (n > s.size())
    {
        cout << "impossible" << endl;
    }
    else
    {
        if (ss.size() > n)
        {
            cout << 0;
        }
        else
        {
            cout << n - ss.size();
        }
        cout << "\n";
    }
    return 0;
}