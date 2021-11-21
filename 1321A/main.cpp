#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

const int MAX = 100+10;

int n, countA = 0, countB = 0;
int a[MAX];
int b[MAX];


int main()
{
    //freopen("input.txt", "r", stdin);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        countA += a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i] == 1 && a[i] == 1) countA--;
        else countB += b[i];
    }

    if (countA == 0)  cout << -1;
    else if (countA > countB) cout << 1;
    else
    {
        int chia = ++countB / countA;
        if (countB % countA >= 1) chia++;
        cout << chia;
    }

    return 0;
}
