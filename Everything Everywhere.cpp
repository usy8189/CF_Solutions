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
    int t;
    cin >> t;
    while (t--)
    {   
       ll n;
       cin>>n;
       vector<ll>a(n);
       fori(i,0,n)cin>>a[i];
       int ans=0;
       fori(i,0,n-1)
       {
        ll t1=abs(a[i]-a[i+1]);
        ll t2=__gcd(a[i],a[i+1]);
        if (t1==t2)ans++;
       }
       cout<<ans<<endl;
    }
    return 0;
}
