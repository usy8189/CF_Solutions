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
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < n; i++)
            cin >> b[i];
        ll l = 0, r = n - 1;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] != b[i] )
            {
                l = i;
                break;
            }
        }
        for (ll i = n - 1; i >= 0; i--)
        {
            if (a[i] != b[i] )
            {
                r = i;
                break;
            }
        }
        while (l > 0 && a[l-1] == b[l-1] && a[l-1] <= b[l])
        {
            l--;
        }

        while (r < n-1 && a[r+1] == b[r+1] && a[r+1] >= b[r])
        {
            r++;
        }
    
        cout << l + 1 << " " << r + 1 << "\n";
    }

    return 0;
}
