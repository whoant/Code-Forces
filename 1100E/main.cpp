#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int n, m, u, v, c;

const int MAX = 100000+10;

vector<tuple<int, int, int>> adj;

int topo[MAX];

bool TopoSort(int cost)
{
    int a[MAX];
    bool visited[MAX];
    vector<int> g[n+1];

    bool iFlage = true;
    int dem = 0;

    queue<int> temp;

    for (int i = 1; i <= n; i++)
    {
        visited[i] = false;
        a[i]= 0;
        topo[i] = 0;
    }

    for (int i = 0; i < m; i++)
    {
        int u = get<0>(adj[i]);
        int v = get<1>(adj[i]);
        int w = get<2>(adj[i]);
        if (w > cost)
        {
            g[u].push_back(v);
            a[v]++;
        }
    }

    while (iFlage)
    {
        iFlage = false;
        for (int i = 1; i <= n; i++)
        {
            if (visited[i] == false && a[i] == 0)
            {
                visited[i] = true;
                temp.push(i);
                topo[i] = dem++;
            }
        }
        while (!temp.empty())
        {
            int next = temp.front();
            temp.pop();
            for (int i = 0; i < g[next].size(); i++)
            {
                if (--a[g[next][i]] == 0) iFlage = true;
            }
        }
    }

    for (int i = 1; i <= n; i++) if (a[i] > 0) return false;
    return true;

}

int main()
{
    //freopen("input.txt", "r", stdin);
    int left = 0, right = 0;

    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v >> c;
        adj.push_back(make_tuple(u, v, c));
        right = max(right, c);
    }

    while (left <= right)
    {
        int mid = (left + right) / 2;
        bool check = TopoSort(mid);
        if (check) right = mid - 1;
        else left = mid + 1;
    }

    TopoSort(left);

    int maxCost = 0;
    vector<int> output;

    for (int i = 0 ; i < m; i++)
    {
        int u = get<0>(adj[i]);
        int v = get<1>(adj[i]);
        int w = get<2>(adj[i]);

        if (w <= left && topo[u] > topo[v])
        {
            maxCost = max(maxCost, w);
            output.push_back(i + 1);
        }
    }

    cout << maxCost << " " << output.size() << endl;
    for (auto it:output)
    {
        cout << it << " ";
    }


    return 0;
}
