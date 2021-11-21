#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;

    char s[n];
    for (int i = 0; i < n; i++) cin >> s[i];

    int dist[n];

    fill(dist, dist + n, 1e4);
    dist[0] = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] ==  '0') continue;

        for (int j = 0; j <= d; j++)
        {
            if (i + j < n && s[i + j] == '1') dist[i+j] = min(dist[i+j], dist[i] + 1);
        }
    }


    if(dist[n-1] == 1e4) cout << "-1";
    else cout << dist[n-1];

    return 0;
}
