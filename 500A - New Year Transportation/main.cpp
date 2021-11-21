#include <bits/stdc++.h>

using namespace std;

int n, t;
vector<vector<int>> adj;

int BFS(int start)
{
    queue<int> q;
    int visited[n + 1];
    memset(visited, 0, sizeof(visited));

    visited[start] = 1;
    q.push(start);

    while (!q.empty())
    {
        int next = q.front();
        q.pop();
        for (auto it:adj[next - 1])
        {
            if (visited[it] == 0)
            {
                visited[it] = 1;
                q.push(it);
            }
        }
    }
    return visited[t];
}

int main()
{
    cin >> n >> t;
    for (int i = 1; i < n; i++)
    {
        int temp;
        cin >> temp;
        adj.push_back({i+temp});
    }
    adj.push_back({});

    if (BFS(1)) cout << "YES";
    else cout << "NO";

    return 0;
}
