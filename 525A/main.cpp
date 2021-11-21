#include <bits/stdc++.h>

using namespace std;

int main()
{

    int listKey[27];
    memset(listKey, 0, sizeof(listKey));

    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        char key, keyhole;
        cin >> key >> keyhole;
        listKey[key - 'a']++;
        listKey[keyhole - 'A']--;
        if (listKey[keyhole - 'A'] < 0)
        {
            listKey[keyhole - 'A'] = 0;
        }

    }

    int total = 0;
    for (int i = 0; i <= 26; i++)
    {
        total += listKey[i];
    }
    cout << total << endl;

    return 0;
}
