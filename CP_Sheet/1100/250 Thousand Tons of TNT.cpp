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
      for (int i = 0; i < n; i++)
      {
        cin >> a[i];
      }
      vector<ll> factors;
      for (ll i = 1; i * i <= n; i++)
      {
          if (n % i == 0)
          {
              factors.push_back(i);
              if (i != n / i)
                  factors.push_back(n / i);
          }
      } 
      ll ans = int64_t(-1e18);
        for (ll i = 0; i < factors.size(); i++)
        {
            ll temp = factors[i];
            ll min_val = int64_t(1e18);
            ll max_val = int64_t(-1e18);
            ll sum = 0;
            for (ll j = 0; j < n; j ++)
            {
                sum += a[j];
                temp--;
                if (temp == 0)
                {
                    min_val = min(min_val, sum);
                    max_val = max(max_val, sum);
                    sum = 0;
                    temp = factors[i];
                }
            }
            ans = max(ans, max_val - min_val);
        }
        cout << ans << endl;

    }

    return 0;
}
