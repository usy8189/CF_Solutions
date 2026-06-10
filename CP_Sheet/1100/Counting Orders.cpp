#include <bits/stdc++.h>
#define ll long long
#define MOD (ll)(1e9+7)
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
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < n; i++)
            cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        bool possible = true;
        ll ans = 1;
        for (ll i = 0; i < n; i++)
        {
        ll temp = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
		ll count = a.size() - temp;
		ans = ans * max(count - i, 0LL) % MOD;
        }  
        cout << ans << "\n";      
       
    }

    return 0;
}
