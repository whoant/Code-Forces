#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int n, m, a, b, w;

map<int, vector<pair<int, int>>> adj;

//first => do dai
//second => dinh toi

void Dijkstra(int start)
{
    bool visited[n+10];
    int dis[n+10];
    int pre[n+10];

    for (int i = 0; i < n + 10; i++)
    {
        dis[i] = INT_MAX;
        visited[i] = false;
        pre[i] = -1;

    }

    dis[start] = 0;
    pre[start] = -1;

    priority_queue<pair<int, int>, vector<pair<int, int>>,greater<pair<int, int>>> q;
    q.push({0, start});

    while(!q.empty())
    {
        int currentIndex = q.top().second;
        q.pop();

        if (visited[currentIndex]) continue;
        visited[currentIndex] = true;

        for (auto v:adj[currentIndex])
        {
            int currentTarget = v.first;
            if(visited[currentTarget]) continue;

            int currentDis = v.second;

            if (!visited[currentTarget] && dis[currentTarget] > dis[currentIndex] + currentDis)
            {
                dis[currentTarget] = dis[currentIndex] + currentDis;
                q.push({dis[currentTarget], currentTarget});
                pre[currentTarget] = currentIndex;
            }
        }
    }

    if (visited[n])
    {
        vector<int> res;
        for (int i = n; i != -1; i = pre[i]) res.push_back(i);
        for (int i = res.size() - 1; i >= 0; i--) cout << res[i] << " ";
        return;

    }

    cout << -1;

}

int main()
{
    //freopen("input.txt", "r", stdin);
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b >> w;
        adj[a].push_back({b, w});
        adj[b].push_back({a, w});
    }

    Dijkstra(1);


    return 0;
}
