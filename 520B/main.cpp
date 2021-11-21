#include <bits/stdc++.h>
#include <cstdio>

using namespace std;
const int MAX = 10000+10;

int n, m;
int pre[MAX];

void BFS()
{
    bool visited[MAX];
    queue<int> q;

    memset(visited, 0, sizeof(visited));

    pre[n] = -1;
    q.push(n);

    while(q.empty() == false)
    {
        int next = q.front();
        q.pop();
        if (visited[next] == false)
        {
            visited[next] = true;

            int subtracts = next - 1;
            if (visited[subtracts] == false && subtracts >= 1 && subtracts <= 10000)
            {
                pre[subtracts] = next;
                if (subtracts == m) break;
                q.push(subtracts);
            }

            int multiply = next * 2;
            if (visited[multiply] == false && multiply >= 1 && multiply <= 10000)
            {
                pre[multiply] = next;
                if (multiply == m) break;
                q.push(multiply);
            }
        }
    }

    int total = 0;
    for (int i = pre[m]; i != -1; i = pre[i])total++;
    cout << total << endl;

}


int main()
{
    //freopen("input.txt", "r", stdin);
    cin >> n >> m;
    BFS();
    return 0;
}
