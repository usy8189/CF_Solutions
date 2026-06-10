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
        ll n,m;
        cin>>n>>m;
        vector<ll>a(n);
        ll ans=0;
        fori(i,0,n){
            cin>>a[i];
            a[i] %=m;
        }
        sort(a.begin(),a.end());
        bool only=true;
        map<ll,ll>mp;
        for(ll x:a){
           mp[x]++;
        }
        if (mp[0] > 0) ans++;
        if (m % 2 == 0 && mp[m/2] > 0) {
            ans++;
        }
        for (int i = 1; i < (m+1)/2; i++) {
            ll x = mp[i];
            ll y = mp[m-i];

            if (x == 0 && y == 0) continue;

            ans++;

            if (x != y) {
                ans += abs(x - y) - 1;
            }
        }
                cout<<ans<<endl;

    }

    return 0;
}
