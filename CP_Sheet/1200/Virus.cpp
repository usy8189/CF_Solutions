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
        vector<ll>a(m);
        fori(i,0,m)cin>>a[i];
        sort(a.begin(),a.end());
        vector<int>g(m);
        fori(i,0,m){
            if (i<m-1)
            {
                g[i]=a[i+1]-a[i]-1;
            }
            else {
                g[i]=a[0]-1+n-a[i];
            }
        }
        sort(g.rbegin(),g.rend());
        ll ans=0;
        ll temp=0;
        fori(i,0,m)
        {   
            ll temp2=g[i]-temp;
            if(temp2<=0)break;
            if(temp2==1){
                ans++;
                temp+=2;
            }
            else{
                ans+=temp2-1;
                temp+=4;
            }
            
        }
        cout<<n-ans<<endl;
        
    }

    return 0;
}
