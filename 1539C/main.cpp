#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

typedef long long LL;

int n;
LL k, x;
LL arr[200000];

void task()
{
    vector<LL> res;

    sort(arr, arr + n);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - arr[i - 1] > x)
        {
            res.push_back(arr[i] - arr[i - 1]);
        }
    }

    int total = res.size() + 1;
    sort(res.begin(), res.end());
    for (auto it : res)
    {
        if (k <= 0)
            break;
        LL temp = (it - 1) / x;
        //cout << temp << endl;
        if (temp <= k)
        {
            k -= temp;
            total--;
        }
    }
    cout << total;
}

int main()
{
    //freopen("input.txt", "r", stdin);
    cin >> n >> k >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    task();
    return 0;
}
