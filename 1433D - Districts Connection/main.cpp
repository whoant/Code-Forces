#include <bits/stdc++.h>
#include <cstdio>


using namespace std;

void solve()
{
    int n;
    map<int, vector<int>> m;
    vector<vector<int>> inp;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int temp;
        cin >> temp;
        m[temp].push_back(i);
    }

    if (m.size() <= 1)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";

    for (auto it:m) inp.push_back(it.second);

    for (int i = 1; i < inp.size(); i++)
    {
        for (int j = 0; j < inp[i].size(); j++) cout << inp[0][0] << " " << inp[i][j] << "\n";
    }

    for (int i = 1; i < inp[0].size(); i++)
    {
        cout << inp[0][i] << " " << inp[1][0] << "\n";
    }

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
