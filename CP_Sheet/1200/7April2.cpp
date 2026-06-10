//by Ujjwal Singh Yadav 

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define fori(i, a, b) for (ll i = a; i < b; i++)
#define YYY cout<<"YES"<<endl;
#define NNN cout<<"NO"<<endl;
#define LUN vector<ll>a(n);fori(i,0,n)cin>>a[i];
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
        ll n,k;
        cin>>n>>k;
        LUN
        ll kk;
        cin>>kk;
        ll l=0,r=0;
        kk--;
        fori(i,0,kk)
        {
            if (a[i]!=a[i+1])
            {
                l++;
            }
        }
        fori(i,kk,n-1)
        {
            if (a[i]!=a[i+1])r++;
        }
        ll ans = max (l,r);
        if (ans%2!=0)ans++;
        cout<<ans<<endl;
    }

    return 0;
}
