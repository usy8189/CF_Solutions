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

        vector<ll> a(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll g = 0;

        for (ll i = 0; i < n/2; i++)
        {
            g = __gcd(g, abs(a[n-1-i] - a[i]));
        }

        cout << g << "\n";
    }

    return 0;
}