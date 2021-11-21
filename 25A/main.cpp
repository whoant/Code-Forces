#include <bits/stdc++.h>

using namespace std;

int n, a;
int indexOdd = 0, indexEvenn = 0;
int countOdd = 0, countEvenn = 0;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if ((a % 2) == 0)
        {
            indexEvenn = i;
            countEvenn++;
        }else
        {
            indexOdd = i;
            countOdd++;
        }
    }

    if (countEvenn == 1)  cout << indexEvenn + 1;
    else cout << indexOdd + 1;
    return 0;
}
