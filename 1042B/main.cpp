#include <bits/stdc++.h>

using namespace std;

map<string, int> a;

const int MAX = 10000000;

int main()
{
    int n, c;
    string s;
    a["A"] = a["B"] = a["C"] = a["AB"] = a["AC"] = a["BC"] = a["ABC"] = MAX;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c >> s;
        sort(s.begin(), s.end());
        a[s] = min(a[s], c);
    }

    int res = a["A"] + a["B"] + a["C"];
    res = min(res, a["AB"] + a["C"]);
    res = min(res, a["AC"] + a["B"]);
    res = min(res, a["BC"] + a["A"]);
    res = min(res, a["AB"] + a["AC"]);
    res = min(res, a["AB"] + a["BC"]);
    res = min(res, a["AC"] + a["BC"]);
    res = min(res, a["ABC"]);

    if (res == MAX) cout << -1;
    else cout << res;


    return 0;
}
