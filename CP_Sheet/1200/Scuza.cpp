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
        ll n,q;
        cin>>n>>q;
        vector<ll>a(n),k(q);
        fori(i,0,n)cin>>a[i];
        fori(i,0,q)cin>>k[i]; 


        vector<ll> pre(n+1, 0), maxi(n),ans;

        maxi[0] = a[0];
        fori(i,1,n)
            maxi[i] = max(maxi[i-1], a[i]);

        fori(i,1,n+1)
            pre[i] = pre[i-1] + a[i-1];

        fori(i,0,q)
        {
            auto it = upper_bound(maxi.begin(), maxi.end(), k[i]);
            ll pos = it - maxi.begin();
            ll idx = pos - 1;

            if (idx < 0) ans.push_back(0);
            else ans.push_back(pre[idx+1]);
        }
        
        fori(i,0,q)cout<<ans[i]<<" ";
        cout<<endl;
    }

    return 0;
}
