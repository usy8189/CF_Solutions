//by Ujjwal Singh Yadav 

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define fori(i, a, b) for (ll i = a; i < b; i++)
#define BOOB vector<ll>a(n);fori(i, 0, n)cin>>a[i];
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
        BOOB;
        fori(i,0,n)
        {
            int temp=0;
            while(a[i]>=pow(2,temp))
            temp++;
            a[i]=temp;
        }
        map<ll,ll>fuck;
        for(auto x : a)
        {
            fuck[x]++;
        }
        ll ans=0;
        for(auto x : fuck)
        {
            ll tt = x.second;
            if (tt>1)
            {
                ans+= (tt*(tt-1))/2;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
