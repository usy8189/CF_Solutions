#include <bits/stdc++.h>
#define ll long long
const long long MOD = 1e9 + 7;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll n1 = n % MOD;

        ll ans = n1 * ((n1 + 1) % MOD) % MOD;
        ans = ans * ((4 * n1 - 1 + MOD) % MOD) % MOD;
        ans = ans * 166666668 % MOD; 

        ll result = (2022LL * ans) % MOD;

        cout << result << "\n";
    }

    return 0;
}