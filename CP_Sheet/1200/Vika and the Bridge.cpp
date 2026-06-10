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
        ll n,k;
        cin>>n>>k;
        vector<ll>c(n);
        fori(i,0,n)cin>>c[i];
        vector<int>lol[k+1];
        fori(i,1,k+1)lol[i].pb(0);
        fori(i,0,n)lol[c[i]].pb(i+1);
        fori(i,1,k+1)lol[i].pb(n+1);
        ll ans=LLONG_MAX;
        fori(i,1,k+1)
        {
            ll tt=0,tttt=0;
            fori(j,0,lol[i].size()-1)
            {
                int gp=lol[i][j+1]-lol[i][j]-1;
                if(gp>=tt)
                {
                    tttt=tt;
                    tt=gp;
                }
                else if (gp>tttt)tttt=gp;
            }
            ll lun=max(tt/2,tttt);
            ans=min(ans,lun);
        }
        cout<<ans<<endl;
    }

    return 0;
}
