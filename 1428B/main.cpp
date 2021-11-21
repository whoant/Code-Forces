#include <bits/stdc++.h>

using namespace std;

int solve()
{
    int n;
    string s;
    cin >> n >> s;

    int clockWise = 0, antiClockWise = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '>') clockWise++;
        else if (s[i] == '<') antiClockWise++;
    }

    if (clockWise == 0 || antiClockWise == 0) return n;

    int res = 0;
    s += s[0];

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '-' || s[i+1] == '-') res++;
    }
    return res;
}


int main()
{
    int t;
    cin >> t;
    while (t--) cout << solve() << "\n";
    return 0;
}
