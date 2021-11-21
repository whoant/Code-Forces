#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int me = 0;
    int you = 0;
    int a[n], b[n];

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = x;
        me += x;
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b[i] = x;
        you += x;
    }

    sort(a, a + n);
    sort(b, b + n);

    int k = n / 4;

    for (int i = 0; i < k; i++)
    {
        me -= a[i];
        you -= b[i];
    }

    if (me >= you)
    {
        cout << 0 << "\n";
        return;
    }

    int add = 0;

    int z = n;

    int indexSubtract = k;

    int indexAdd = k;

    while (me < you)
    {
        me += 100;
        add++;
        z++;
        indexAdd--;

        if (indexAdd >= 0)
            you += b[indexAdd];

        if (z % 4 == 0)
        {
            me -= a[indexSubtract];
            indexSubtract++;
        }
    }

    cout << add << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
