#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

void solve()
{
    vector<pair<int, int>> point;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        int k;
        cin >> k;
        int maxRow = -1;
        for (int j = 0; j < k; j++)
        {
            int a;
            cin >> a;
            maxRow = max(maxRow, a - j + 1);
        }
        point.push_back({maxRow, k});

    }


    sort(point.begin(), point.end());
    int res = -1;
    int k = 0;

    for (auto it:point)
    {
        res = max(res, it.first - k);
        k += it.second;

    }
    cout << res << endl;
}

int main()
{
    //freopen("inp.txt", "r", stdin);
    int n;
    cin >> n;
    while (n--) solve();

    return 0;
}
