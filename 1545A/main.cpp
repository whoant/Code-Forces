#include <bits/stdc++.h>

using namespace std;


void solve()
{
    int n;
    cin >> n;
    vector<int> inp;
    map<int, pair<int, int>> ma, mb; //first -> chan, second -> le

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        inp.push_back(temp);
        if (i % 2 == 0) ma[temp].first++;
        else ma[temp].second++;
    }

    sort(inp.begin(), inp.end());

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0) mb[inp[i]].first++;
        else mb[inp[i]].second++;
    }

    auto ib = mb.begin();
    for (auto ia = ma.begin();ia != ma.end(); ++ia)
    {
        if (ia->first != ib->first || ia->second != ib->second)
        {
            cout << "NO\n";
            return;
        }

        ++ib;
    }

    cout << "YES\n";

}

int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
