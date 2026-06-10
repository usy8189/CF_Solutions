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
        ll n, q;
        cin >> n >> q;

        vector<ll> a(n);

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        int minx = 31;

        for (int i = 0; i < q; i++)
        {
            int x;
            cin >> x;

            if (x >= minx)
                continue;

            minx = x;

            for (int j = 0; j < n; j++)
            {
                if (a[j] % (ll)pow(2, x) == 0)
                    a[j] += (ll)pow(2, x - 1);
            }
        }

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";

        cout << "\n";
    }

    return 0;
}