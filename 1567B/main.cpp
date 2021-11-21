#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[300000+5];

    int len = sizeof(arr) / sizeof(arr[0]);
    arr[0] = 0;
    for (int i = 1; i < len; i++)
    {
        arr[i] = arr[i - 1] ^ i;
    }

    while(n--)
    {
        int a, b;
        cin >> a >> b;
        int res = arr[a - 1] ^ b;
        if (res == 0) res = a;
        else {
            if (res == a) res = a + 2;
            else res = a + 1;
        }
        cout << res << endl;
    }

    return 0;
}
