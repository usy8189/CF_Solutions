//by Ujjwal Singh Yadav 

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define fori(i, a, b) for (ll i = a; i < b; i++)
#define LUN ll n;cin>>n;vector<ll>a(n);fori(i,0,n)cin>>a[i];
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
        LUN
        ll ct0=0,ct1=0;
        fori(i,0,n)
        {
            if (a[i]==0)ct0++;
            if (a[i]==1)ct1++;
        }
        if (ct0==0)NNN
        else if(ct0>1 && ct1==0)NNN
        else YYY
    }
    return 0;
}
