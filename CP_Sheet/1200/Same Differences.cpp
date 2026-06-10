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
        ll n,ans=0;
        cin >> n;
        vector<ll> a(n);
        fori(i,0,n)
       {
        cin>>a[i];
        a[i]-=(i+1);
       }
       unordered_map<ll,ll>m;
       for(ll x : a)
       {
        m[x]++;
       }
       for(auto &it : m)
       {
        ll temp=it.second;
        ans += (temp*(temp-1))/2;
       }   
       cout<<ans<<endl;
    }

    return 0;
}
