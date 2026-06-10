#include <bits/stdc++.h>
#define ll long long

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
        vector<pair<ll, ll>> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i].first;
            if(a[i].first % 2 == 0)
            {
                a[i].second = 0;
            }
            else
            {
                a[i].second = 1;
            }
        }
        vector<ll> b(n);
        b[0] = a[0].first;
        
        for (ll i = 1; i < n; i++)
        {
            if (a[i].second != a[i - 1].second && b[i - 1] > 0)
            {
                b[i] = b[i - 1] + a[i].first;
            }
            else
            {
                b[i] = a[i].first;
            }
            
        }
        ll ans = int64_t(-1e18);
        for (ll i = 0; i < n; i++)
        {
            ans = max(ans, b[i]);
        }
        cout << ans << endl;
    }

    return 0;
}
