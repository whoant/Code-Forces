#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;
typedef long long ll;

int n;
deque<pair<ll, ll>> input;

int main()
{
    //freopen("input.txt", "r", stdin);

    ll sCount = 0;

    cin >> n;
    for (int i = 0; i < n; i++){
        ll a, b;
        cin >> a >> b;
        sCount += a;
        input.push_back(make_pair(b, a));
    }

    sort(input.begin(), input.end());

    if (sCount <= input[0].first) {
        cout << sCount * 2;
        return 0;
    }

    ll cost = 0;
    ll cnt = 0;

    while(cnt < sCount){

        if (cnt < input[0].first) {
            int sizeInput = input.size() - 1;
            ll temp = min(input[sizeInput].second, input[0].first - cnt);
            cost += temp * 2;
            cnt += temp;
            input[sizeInput].second -= temp;
            if (input[sizeInput].second == 0) input.pop_back();

        }else {
            cost += input[0].second;
            cnt += input[0].second;
            input.pop_front();
        }

        if (cnt >= input[input.size() - 1].first){
            cost += sCount - cnt;
            break;
        }
    }

    cout << cost;

    return 0;
}
