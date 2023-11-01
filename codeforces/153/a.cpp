#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "()")
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            if (s.find("((") != string::npos or s.find("))") != string::npos)
            {
                cout << "(";
                string p = "(";
                for (int i = 1; i < s.size() * 2; i++)
                {
                    if (p == "(")
                    {
                        cout << ")";
                        p = ")";
                    }
                    else
                    {
                        cout << "(";
                        p = "(";
                    }
                }
            }
            else
            {
                for (int i = 0; i < s.size(); i++)
                {
                    cout << "(";
                }
                for (int i = 0; i < s.size(); i++)
                {
                    cout << ")";
                }
            }
            cout << endl;
        }
    }

    return 0;
}