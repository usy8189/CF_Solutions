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
        vector<ll> c(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        sort(c.begin(), c.end());
        vector<ll> prefix(n);
        prefix[0] = c[0];
        for (ll i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + c[i];
        }
        bool possible = true;
        for (ll i = 1; i < n; i++)
        {
            if (prefix[i - 1 ] < c[i])
            {
                possible = false;
                break;
            }
        }
        if (n>1 && c[0] != 1 && c[1] != 1)
        {
            possible = false;
        }
        if (n==1 && c[0] != 1)
        {
            possible = false;
        }
        if (possible)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
