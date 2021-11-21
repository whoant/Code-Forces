#include <bits/stdc++.h>

using namespace std;

const int mx=1e3+1;

int n, m, k;
int arr[100000 + 10];
bool vis[mx];
vector<int>adj[mx];
int cnt = 0;

void dfs(int u)
{
    vis[u] = true;
    cnt++;

    for (auto to:adj[u])
    {
        if (vis[to] == false) dfs(to);
    }
}

int main()
{
    cin >> n >> m >> k;

    int gov[n];
    for (int i = 0; i < k; i++) cin >> gov[i];

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 0; i <= n; i++) vis[i] = false;

    int maxCount = 0;
    for (int i = 0; i < k; i++)
    {
        cnt = 0;
        dfs(gov[i]);
        maxCount = max(cnt, maxCount);

    }

    int y = 0;
    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == false)
        {
            cnt = 0;
            dfs(i);

            total = maxCount * cnt;

        }
    }


    cout << maxCount;

    return 0;
}
