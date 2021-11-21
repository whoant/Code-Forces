#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n][5];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>arr[i][j];
        }
    }

    map<int,int> mp;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j< n; j++)
        {
            if(arr[j][i]) mp[i]++;
        }
    }

    int mid = n / 2;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {

            if(i == j) continue;
            int cnt=0;

            for(int k=0; k<n; k++)
            {
                if(arr[k][i]==1 || arr[k][j]==1) cnt++;
            }

            if ( cnt==n && mp[i]>= mid && mp[j]>= mid)
            {
                cout<<"YES\n";
                return;
            }

        }
    }

    cout<<"NO\n";

}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
