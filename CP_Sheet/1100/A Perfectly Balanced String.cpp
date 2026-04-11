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
        string s;
        cin >> s;

        ll n = s.size();
        ll breaker = -1;

        vector<int> freq(26, 0);

        for (ll i = 0; i < n; i++)
        {
            if (freq[s[i] - 'a'] == 0)
            {
                freq[s[i] - 'a']++;
            }
            else
            {
                breaker = i;
                break;
            }
        }

        ll j = 0, k = 0;
        bool possible = true;

        while (j != n )
        {

            if (s[j] != s[k])
                possible = false;

            k++;
            j++;
            if (k == breaker)
                k = 0;
        }

        if (possible)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}