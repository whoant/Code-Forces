#include <bits/stdc++.h>
#include <cstdio>

using namespace std;


int main()
{
    freopen("input.txt", "r", stdin);

    int n;
    char s[100];

    cin >> n >> s;
    cout << s[0];
    if( n%2 == 1 )
    {
        for(int i=1; i<n; i++)
        {
            if((i % 2 == 0)&&(i <= n-3)) cout<<"-";
            cout << s[i];
        }
    }
    else
    {
        for(int i=1; i<n; i++)
        {
            if((i % 2 == 0)&&(i <= n-2)) cout<<"-";
            cout << s[i];
        }
    }


    return 0;
}
