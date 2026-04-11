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
        vector<ll> pos(1001,-1);

        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
            pos[a[i]] = i + 1;
        }

        ll maxi = -1;

        for(ll i=1;i<=1000;i++)
        {
            for(ll j=1;j<=1000;j++)
            {
                if(pos[i]!=-1 && pos[j]!=-1 && __gcd(i,j)==1)
                {
                    maxi = max(maxi , pos[i] + pos[j]);
                }
            }
        }

        cout << maxi << "\n";
    }

    return 0;
}