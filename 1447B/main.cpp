#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int n, m, temp;

void task()
{
    int total = 0, mi = INT_MAX, countNegative = 0;

    cin >> n >> m;
    for (int i = 0; i < n * m; i++)
    {
        cin >> temp;
        total += abs(temp);
        if (temp < 0) countNegative++;
        mi = min(mi, abs(temp));
    }

    if ((countNegative % 2) == 1) cout << total - 2 * mi << endl;
    else cout << total << endl;
}


int main()
{
    int t;
    cin >> t;
    while(t--) task();
    return 0;
}
