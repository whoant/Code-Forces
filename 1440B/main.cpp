#include <bits/stdc++.h>

using namespace std;

void task()
{
    int n, k, temp;
    cin >> n >> k;
    int length = n * k;
    int a[length];

    long long total = 0;
    int step = n / 2;
    if (n % 2 == 1) step++;
    step = n - step;

    for (int i = 0; i < length; i++) cin >> a[i];
    int i = length - 1;

    for (int j = 0; j < k; j++)
    {
        i -= step;
        total += a[i];
        i--;
    }
    cout << total << endl;

}

int main()
{
    int t;
    cin >> t;
    while(t--) task();


    return 0;
}
