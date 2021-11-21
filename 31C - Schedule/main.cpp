#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int n;
vector<int> output;


struct Group{
    int s, f, i;


    Group(int start, int finish, int index)
    {
        s = start;
        f = finish;
        i = index;
    }

    bool operator<(Group &p) {
        if (s == p.s) return f < p.f;
        return s < p.s;
    }
};

vector<Group> g;

void task()
{
    for (int i = 0; i < g.size(); i++)
    {
        bool check = true;
        int startCurrent = 0;
        int endCurrent = 0;

        for (int j = 0; j < g.size(); j++)
        {
            if (i == j) continue;
            Group temp = g[j];
            if (startCurrent < temp.s && startCurrent < temp.f && endCurrent <= temp.s && endCurrent < temp.f )
            {
                startCurrent = temp.s;
                endCurrent = temp.f;
            }else
            {
                check = false;
                break;
            }

        }

        if (!check) continue;
        output.push_back(g[i].i);
    }
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        g.push_back(Group(l, r, i + 1));
    }

    sort(g.begin(), g.end());


    task();


    sort(output.begin(), output.end());
    cout << output.size() << endl;
    for (auto it:output)
    {
        cout << it << " ";
    }

    return 0;
}
