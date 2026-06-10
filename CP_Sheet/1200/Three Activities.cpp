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
        vector<pair<ll,ll>>a(n),b(n),c(n);
        fori(i,0,n){cin>>a[i].first;    a[i].second=i;}
        fori(i,0,n){cin>> b[i].first;    b[i].second=i;}
        fori(i,0,n){cin>> c[i].first;    c[i].second=i;}
        sort (a.rbegin(),a.rend());
        sort (b.rbegin(),b.rend());
        sort (c.rbegin(),c.rend());

        ll ans = 0;
         fori(i,0,3)
         {
            fori(j,0,3)
            {
                if (a[i].second!=b[j].second)
                {
                    fori(k,0,3)
                    {
                        if (b[j].second!=c[k].second && a[i].second!=c[k].second)
                        {   
                            ll temp=(a[i].first+b[j].first+c[k].first);
                            ans=max(ans,temp);
                        }
                    }
                }
            }
         } 
        
        cout<<ans<<endl;


    }

    return 0;
}
