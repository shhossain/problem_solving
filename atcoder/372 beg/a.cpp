#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (s.find("ab") != string::npos or s.find("ba") != string::npos)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}