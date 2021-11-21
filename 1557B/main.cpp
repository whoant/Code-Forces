#include <bits/stdc++.h>

using namespace std;

#define fp(i, a, b) for (int i = a; i < b; i++)

void solve()
{
    int n, k;
    vector<pair<int, int>> v;

    cin >> n >> k;

    fp(i, 0, n)
    {
        int a;
        cin >> a;
        v.push_back({a, i});
    }

    if (n == 1){
        cout << "YES" << "\n";
        return;
    }

    sort(v.begin(), v.end());

    int res = 1;
    fp(i, 1, n)
    {
        if (v[i].second - v[i-1].second != 1) res++;
    }

    if (res <= k) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    v.clear();
}


int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
