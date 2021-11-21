#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<char> q;
    string s;
    int c = 0;

    cin >> s;

    for (auto it:s)
    {
        if (it == '(') q.push(it);
        else if (it == ')' && !q.empty() && q.top() == '(')
       {
            c++;
            q.pop();
       }

    }
    cout << c * 2 << endl;
    return 0;
}
