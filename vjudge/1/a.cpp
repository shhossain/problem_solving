#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + 3, greater<int>());
        int ct = 0;
        for (int i = 0; i < 3; i++)
        {
            if (arr[i] > 0)
            {
                arr[i]--;
                ct++;
            }
        }

        if (arr[0] > 0 and arr[1] > 0)
        {
            arr[0]--;
            arr[1]--;
            ct++;
        }

        if (arr[1] > 0 and arr[2] > 0)
        {
            arr[1]--;
            arr[2]--;
            ct++;
        }

        if (arr[0] > 0 and arr[2] > 0)
        {
            arr[0]--;
            arr[2]--;
            ct++;
        }

        if (arr[0] > 0 and arr[1] > 0 and arr[2] > 0)
        {
            arr[0]--;
            arr[1]--;
            arr[2]--;
            ct++;
        }

        cout << ct << endl;
    }

    return 0;
}