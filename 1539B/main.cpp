#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

string s;
int n, q;
int preValue[1000000+10];
map<char, int> refValue;

void preHandle()
{
    for (int i = 97; i < 123; i++)
    {
        refValue[char(i)] = i - 96;
    }

    preValue[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        preValue[i] = preValue[i-1] +  refValue[s[i-1]] ;
    }
}

void task()
{
    int l, r;
    cin >> l >> r;
    cout << preValue[r] - preValue[l-1] << endl;
}

int main()
{

    //freopen("input.txt", "r", stdin);
    cin >> n >> q >> s;

    preHandle();

    while(q--){
        task();
    }
    return 0;
}
