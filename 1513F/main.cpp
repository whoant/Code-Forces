#include <bits/stdc++.h>

using namespace std;


int n;

int findIndexMin(int a[])
{
    int index = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[index]) index = i;
    }
    return index;
}

int findIndexMax(int a[])
{
    int index = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[index]) index = i;
    }
    return index;
}

int main()
{
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }

    int minIndex = findIndexMin(b);
    int maxIndex = findIndexMax(b);

    swap(a[minIndex], a[maxIndex]);
    int res = 0;
    for (int i = 0; i < n; i++){
        res += abs(a[i] - b[i]);
    }
    cout << res;

    return 0;

}
