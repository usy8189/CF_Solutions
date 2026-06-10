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
        ll p, q;
        cin >> p >> q;
        ll sum = p + 2*q;
        ll k = 2*sum + 1;
        ll bm = -1, bn = -1;
        ll bf = -1;
        for (ll i = 1; i * i <= k; i++)
        {
            if (k % i == 0)
            {
                ll a = i;
                ll b = k / i;
                if (a >= 3 && b >= 3)
                {
                    ll m = (a - 1) / 2;
                    ll n = (b - 1) / 2;

                    if (m > 0 && n > 0)
                    {
                        ll prod = m * n;
                        if (prod > bf)
                        {
                            bf = prod;
                            bm = m;
                            bn = n;
                        }
                    }
                }
                if (a != b)
                {
                    ll a2 = b, b2 = a;

                    if (a2 >= 3 && b2 >= 3)
                    {
                        ll m = (a2 - 1) / 2;
                        ll n = (b2 - 1) / 2;

                        if (m > 0 && n > 0)
                        {
                            ll prod = m * n;
                            if (prod > bf)
                            {
                                bf = prod;
                                bm = m;
                                bn = n;
                            }
                        }
                    }
                }
            }
        }
        if (bm == -1)
            cout << -1 << "\n";
        else
            cout << bm << " " << bn << "\n";
    }

    return 0;
}