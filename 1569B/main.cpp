#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    char s[n];
    int newArray[n];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        if (s[i] == '2')
        {
            newArray[cnt] = i;
            cnt++;
        }
    }

    if (n < 2)
    {
        cout << "NO" << endl;
        return;
    }

    char output[n][n];


    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            output[newArray[i]][newArray[cnt - 1]] = '+';
            output[newArray[cnt - 1]][newArray[i]] = '-';
            continue;
        }

        output[newArray[i]][newArray[i - 1]] = '+';
        output[newArray[i - 1]][newArray[i]] = '-';
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j) output[i][j] = 'X';
            cout << output[i][j];
        }
        cout << endl;
    }



}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
