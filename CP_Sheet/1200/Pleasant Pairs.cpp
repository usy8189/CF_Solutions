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
        cin>>n;
        vector<pair<ll,ll>>a(n);
        fori(i,0,n){cin>>a[i].first;a[i].second=i;}
        sort(a.begin(),a.end());
        ll ans=0;
        fori(i,0,n-1)
        {
            fori(j,i+1,n)
            {
                if (a[j].first*a[i].first>2*n)break;
                if(a[i].first*a[j].first==a[i].second+1+a[j].second+1)ans++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
