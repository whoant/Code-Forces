#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int n;
int t[200+1];


void task()
{
    cin >> n;
    for (int i = 0; i < n; i++) cin >> t[i];
    sort(t, t + n);
    for (int i = 0; i < n; i++) cout << t[i] << endl;


}

int main()
{
    freopen("input.txt", "r", stdin);
    task();

    return 0;
}
