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
        ll n,k,x;
        cin>>n>>k>>x;
        vector<ll>a(n),ass;
        fori(i,0,n)cin>>a[i];
        sort(a.begin(),a.end());
        ll tem=0,ans=0;
        fori(i,0,n-1)
        {
            if (a[i+1]-a[i]>x)
            {
                ass.push_back(a[i+1]-a[i]);
            }
        }  
        
        sort(ass.begin(),ass.end());
        fori(j,0,ass.size())
        {
            ll tem2 = (ass[j] - 1) / x;
            if (tem2+tem<=k)
            {
                tem +=tem2;
            }
            else{
                ans++;
            }
        }

        cout<<ans+1<<endl;
        return 0;

}
