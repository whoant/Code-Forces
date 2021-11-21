#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);

    int totalMax = 0;

    for (int i = 0; i < n; i++)
    {
        int p = upper_bound(a, a + n, a[i] + 5) - a;
        totalMax = max(p - i, totalMax);
    }

    cout << totalMax;
    return 0;
}
