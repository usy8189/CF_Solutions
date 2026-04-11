//by Ujjwal Singh Yadav 

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define fori(i, a, b) for (ll i = a; i < b; i++)
const ll INF = 1e18;
const ll MOD = 1e9 + 7;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;

        vector<ll> a(n);
        fori(i, 0, n) cin >> a[i];

        sort(all(a));

        vector<ll> prefix(n + 1);
        prefix[0] = 0;
        fori(i, 1, n + 1)
            prefix[i] = prefix[i-1] + a[i-1];

        ll ans = 0;
        ll pd = 1e18;
        fori(i, 1, n + 1)
        {
            if (prefix[i] > x) break;
            ll d = (x - prefix[i]) / i + 1; 
            ll ud = min(pd, d); 
            ans += ud;
            pd = ud;
        }

        cout << ans << "\n";
    }

    return 0;
}