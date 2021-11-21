#include <bits/stdc++.h>
#include <cstdio>
using namespace std;


int n, m, a, b;

const int MAX_N = 400+1;


vector<int> adjTrain[MAX_N];
vector<int> adjBus[MAX_N];
int flag[MAX_N][MAX_N];

int BFS(vector<int> adj[MAX_N], int start)
{
    bool visited[MAX_N];
    int pre[MAX_N];
    queue<int> q;

    memset(visited, 0, sizeof(visited));

    visited[start] = true;
    pre[start] = -1;
    q.push(start);

    while(!q.empty())
    {
        int next = q.front();
        q.pop();

        for (auto v:adj[next])
        {
            if (!visited[v])
            {
                visited[v] = true;
                pre[v] = next;
                q.push(v);
            }
        }

    }

    if (!visited[n]) return -1;

    vector<int> path;
    for (int i = pre[n]; i != -1; i = pre[i]) path.push_back(i);
    return path.size();


}


int main()
{
    //freopen("input.txt", "r", stdin);
    cin >> n >> m;

    memset(flag, 0, sizeof(flag));

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        adjTrain[a].push_back(b);
        adjTrain[b].push_back(a);
        flag[a][b] = true;
        flag[b][a] = true;
    }


    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i != j && flag[i][j] == false) adjBus[i].push_back(j);
        }
    }


    int pathTrain = BFS(adjTrain, 1);
    int pathBus = BFS(adjBus, 1);

    if (pathTrain == -1 || pathBus == -1) cout << -1;
    else cout << max(pathBus, pathTrain);

    return 0;
}
