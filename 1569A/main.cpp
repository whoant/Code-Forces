#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    char s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    if (n == 1) {
        cout << "-1 -1" << endl;
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i+1])
        {
            cout << i + 1 << " " << i + 2 << endl;
            return;
        }
    }
    cout << "-1 -1" << endl;
}

int main()
{

    int t;
    cin >> t;

    while (t--) solve();


    return 0;
}
