#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;

    cin >> a;

    vector<int> res;
    for (int i = 0; i < a.length(); i+=2){
        res.push_back(a[i] - '0');
    }

    sort(res.begin(), res.end());

    string out;
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i];
        if (i != res.size() - 1) cout << '+';
    }


    return 0;
}
