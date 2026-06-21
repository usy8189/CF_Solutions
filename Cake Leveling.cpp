//by Ujjwal Singh Yadav 

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define fori(i, a, b) for (ll i = a; i < b; i++)
#define YYY cout<<"YES"<<endl;
#define NNN cout<<"NO"<<endl;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {   
        ll n;
        cin>>n;
        vector<ll>a(n),pre(n+1),preee(n),ans;
        pre[0]=0;
        fori(i,0,n){
        cin>>a[i];
        pre[i+1]=(pre[i]+a[i]);
        preee[i]=pre[i+1]/(i+1);
        }
        ll mini=INT_MAX;
        fori(i,0,n)
        {
            mini=min(mini,preee[i]);
            ans.push_back(mini);
        }  
        for(auto x :ans)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
