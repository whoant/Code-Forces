#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char x;
        cin >> x;
        if (x == 'U') x = 'D';
        else if (x == 'D') x = 'U';
        cout << x;
    }
    cout << endl;
}


int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
