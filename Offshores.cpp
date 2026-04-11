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
        ll n,x,y;
        cin>>n>>x>>y;
        vector<int>a(n);
        ll sum=0;
        fori(i,0,n){
            cin>>a[i];
            sum=sum+(a[i]/x)*y;
        }
        ll ans=0;
        fori(i,0,n)
        {
            ll temp = sum;
            ans=max(ans,a[i]+sum-((a[i]/x)*y));
        }
        cout<<ans<<endl;

    }

    return 0;
}

