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
        int n,m;
        cin>>n>>m;
        vector<vector<int>> a(m, vector<int>(n));

        for(int j = 0; j < n; j++) {
        for(int i = 0; i < m; i++) {
            cin >> a[i][j];
        }
        }

        fori(i,0,m)sort(a[i].begin(),a[i].end());
        ll ans=0;
        fori(i,0,m)
        {
            for(ll j=0;j<n;j++)
            {
                ans += a[i][j] * j ;
                ans -= a[i][j] * (n-j-1);
            }
        }

        cout<<ans<<endl;
        
    }

    return 0;
}
