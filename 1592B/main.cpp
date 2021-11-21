#include <bits/stdc++.h>

using namespace std;

void task()
{
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a.push_back({temp, i});
    }

    if (n >= 2 * x) {
        cout << "YES" << endl;
        return;
    }

    sort(a.begin(), a.end());

    for (int i = n - x + 1; i < x; i++)
    {
        //cout << a[i].second << " " << a[i+1].second << " --" <<  endl;
        if (a[i].second  != a[i+1].second - 1) {
            cout << "NO"<< endl;
            return;
        }
    }
    cout << "YES" << endl;


}

int main()
{
    int t;
    cin >> t;
    while(t--) task();
    return 0;
}
