#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int n, t;
bool visited[30000+10];
int adj[30000+10];

void DFS(int s)
{
    visited[s] = true;
    if (!visited[adj[s]])
        DFS(adj[s]);

}

int main()
{
    //freopen("input.txt", "r", stdin);
    int temp;
    cin >> n >> t;

    for (int i = 1; i < n; i++)
    {
        cin >> temp;
        adj[i] = i + temp;
    }



    DFS(1);

    if (visited[t]) cout << "YES";
    else cout << "NO";

    return 0;
}
