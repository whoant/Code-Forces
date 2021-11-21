#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    char x[n];
    vector<char> s;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        s.push_back(x[i]);
    }

    sort(s.begin(), s.end());

    int res = 0;
    int i = 0;
    for(auto it:s)
    {
        if (it != x[i]) res++;
        i++;
    }
    cout << res << endl;

}

int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
