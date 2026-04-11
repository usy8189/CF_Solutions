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
        ll n,q;
        cin>>n>>q;
        vector<ll>a(n),b(n),main(n),prefix(n+1);
        fori(i,0,n)cin>>a[i];
        fori(i,0,n)cin>>b[i];
        vector<vector<ll>>tt(q,vector<ll>(2));
        fori(i,0,q)
        {
            ll l,r;
            cin>>l>>r;
            tt[i]={l,r};
        }
        ll maxi=0;
        for(int i=n-1;i>=0;i--)
        {
            maxi = max(maxi,max(a[i],b[i]));
            main[i]=maxi;
        }
        prefix[0]=0;
        fori(i,1,n+1)
        {
            prefix[i]=main[i-1]+prefix[i-1];
        }
        fori(i,0,q)
        {
            cout<<prefix[tt[i][1]]-prefix[tt[i][0]-1]<< " ";
        }
        cout<<endl;
    }

    return 0;
}
