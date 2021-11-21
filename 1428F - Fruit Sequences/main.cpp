#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

const int N = 1e5+10;

int n;
char s[N];
int f[N];
int ans, sum, now;


int main()
{
    freopen("input.txt", "r", stdin);
    cin >> n >> s + 1;
    for (int i = 1; i <= n + 1; i ++ ) f[i] = n + 1;

    for (int i = n; i >= 1; i -- )
	{
		if (s[i] - '0')
		{
			now++;
			sum += f[now] - i;
		}
		else
		{
			while (now)
			{
				f[now] = i + now;
				now--;
			}
		}
		ans += sum;
	}
    cout << ans;

    return 0;
}
