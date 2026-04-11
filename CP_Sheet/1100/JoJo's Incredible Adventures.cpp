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
        string s;
        cin >> s;

        ll m = s.size();
        s = s + s;

        ll n = s.size();
        ll max1 = 0;
        ll temp = 0;

        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '1')
                temp++;
            else
            {
                max1 = max(max1, temp);
                temp = 0;
            }
        }

        max1 = max(max1, temp);
        max1 = min(max1, m);

        ll ans;

        if (max1 == m)
            ans = m * m;
        else
          { if (max1 % 2 == 1)
            ans = ((max1 +1 ) / 2) * ((max1+1) / 2);
         else
          ans = (max1 / 2) * ((max1 +2 )/ 2);
          }
        cout << ans << "\n";
    }

    return 0;
}