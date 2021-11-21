#include <bits/stdc++.h>

using namespace std;

int n, m;
string s;

vector<int> l[26];

void solve()
{
    int a[26];
    memset(a, 0, sizeof(a));

    string t;
    cin >> t;
    for (int i = 0; i < t.length(); i++)
    {
        a[t[i] - 'a']++;
    }

    int res = 0;
    for (int i = 0; i < 26; i++)
    {
        if (a[i])
        {
            res = max(res, l[i][a[i] - 1]);
        }
    }
    cout << res << endl;

}


int main()
{
    cin >> n >> s >> m;

    for (int i = 0; i < n; i++)
    {
        l[s[i] - 'a'].push_back(i + 1);
    }
    while(m--) solve();

    return 0;
}
