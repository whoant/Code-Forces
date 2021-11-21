#include <bits/stdc++.h>

using namespace std;

void task(){
    int n, maxA = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxA = max(a[i], maxA);
    }
    int temp = a[0];
    bool check = false;
    for (int i = 1; i < n; i++)
    {
        if (temp != a[i])
        {
            check = true;
            break;
        }
    }

    if (check == false)
    {
        cout << "-1"  << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == maxA)
        {
            if ((i - 1 >= 0 && a[i-1] < a[i] )|| (i + 1 < n && a[i + 1] < a[i]))
            {
                cout << i + 1 << endl;
                return;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--) task();

    return 0;
}
