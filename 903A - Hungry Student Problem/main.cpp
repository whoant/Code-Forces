#include <bits/stdc++.h>

using namespace std;

bool task(int x)
{
    for (double i = 0; i * 7 <= x; i++)
    {
        double temp = ((x - (7 * i)) / 3);
        if (temp == (int)temp) return true;
    }
    return false;
}


int main()
{

    int n;
    cin >> n;
    while (n--)
    {
        int temp;
        cin >> temp;
        if (task(temp)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
