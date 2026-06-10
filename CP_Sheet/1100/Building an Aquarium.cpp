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
        ll n, x;
        cin >> n >> x;

        vector<ll> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        ll l = 1, r = 1e10;
        ll ans = 1;

        while (l <= r)
        {
            ll mid = (l + r) / 2;

            ll water = 0;

            for (int i = 0; i < n; i++)
            {
                if (v[i] < mid)
                    water += mid - v[i];

                if (water > x)
                    break;
            }

            if (water <= x)
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}