#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,k;
    cin >> n >> k;

    int arrLength[100+5];
    memset(arrLength, 0, 100+5);

    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        arrLength[temp.length]++;
    }

    return 0;
}
