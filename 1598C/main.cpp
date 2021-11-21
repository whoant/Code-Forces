#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int need = 2 * sum / n;
    map<int, int> mp;
        int cnt = 0;

    for(auto it:a){
        if (mp.find(need - it) != mp.end()){
            cnt += mp[need - it];
        }
        if (mp.find(it) != mp.end())
        {
            mp[it] += 1;
        }else {
            mp[it] = 1;
        }
    }
    cout << cnt << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
