#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b)
{
    return a.length() < b.length();
}

int main()
{
    int n;
    vector<string> res;
    cin >> n;

    while (n--)
    {
        string a;
        cin >> a;
        res.push_back(a);
    }

    sort(res.begin(), res.end(), cmp);

    for (int i = 1; i < res.size(); i++)
    {

        if (res[i].find(res[i - 1]) == string::npos)
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES\n";
    for (auto item : res)
    {
        cout << item << '\n';
    }

    return 0;
}
