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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n),prefix(n+1);
        prefix[0] = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for (ll i = 0; i < n; i++)
        {
            prefix[i + 1] = prefix[i] + a[i];
        }
        ll maxi = 0;
        for (ll i = 0; i <= k; i++)
        {
            maxi = max (maxi, prefix[n-(k-i)] - prefix[2*i]);
        }

        cout << maxi << endl;
    }
    return 0;
}
