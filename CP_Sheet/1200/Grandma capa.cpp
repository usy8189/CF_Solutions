//by Ujjwal Singh Yadav 

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define fori(i, a, b) for (ll i = a; i < b; i++)
const ll INF = 1e18;
const ll MOD = 1e9 + 7;

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
        string s;
        cin >> s;
        ll ans = LLONG_MAX;
        for (int i = 0; i < 26; i++)
        {
            ll ct = 0;
            char temp = 'a' + i;
            ll l = 0, r = n - 1;
            bool ok = true;
            while (l < r)
            {
                if (s[l] == s[r])
                {
                    l++;
                    r--;
                }
                else
                {
                    if (s[l] == temp)
                    {
                        ct++;
                        l++;
                    }
                    else if (s[r] == temp)
                    {
                        ct++;
                        r--;
                    }
                    else
                    {
                        ok = false;
                        break;
                    }
                }
            }
            if (ok)
                ans = min(ans, ct);
        }
        if (ans == LLONG_MAX)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
    return 0;
}