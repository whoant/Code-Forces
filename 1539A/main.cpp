#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

LL task(LL n, LL x, LL t)
{
    if (n == 1) return 0;
    LL a = t / x;

    if (a > n) return n * (n - 1) / 2;

    LL res = a * n;
    res -= a * (a + 1) / 2;
    return res;
}

int main()
{
    int k, n, x, t;
    cin >> k;
    while(k--){
        cin >> n >> x >> t;
        cout << task(n, x, t) << endl;
    }


    return 0;
}
