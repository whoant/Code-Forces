#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

const int INF = 10000000;

int cost[8];

void task()
{
    int c;
    string s;
    cin >> c >> s;
    int vitamin = 0;
    for (int i = 0; i < s.size(); i++) vitamin |= 1 << (s[i] - 'A');
    for (int i = 0; i < 8; i++)
    {
        cost[i | vitamin] = min(cost[i | vitamin], cost[i] + c);
    }

}

int main()
{
    //freopen("input.txt", "r", stdin);
    cost[0] = 0;
    for (int i = 1; i < 8; i++) cost[i] = INF;
    int n;

    cin >> n;
    while (n--) task();
    if (cost[7] == INF) cout << -1 << endl;
    else cout << cost[7] << endl;

    return 0;
}
