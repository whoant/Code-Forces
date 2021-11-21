#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string a1,a2;
    cin >> a1 >> a2;
    if (a2[n - 1] == '1') {
        cout << "NO" << endl;
        return;
    }
    for (int i = 0; i < n; i++){
        if (a1[i] == '1' && a2[i] == '1') {
            cout << "NO" << endl;
            return;
        }
    }


    cout << "YES" << endl;


}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
