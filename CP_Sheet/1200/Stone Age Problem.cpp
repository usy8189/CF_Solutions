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
        ll n,q;
        cin>>n>>q;
        vector<pair<ll,ll>>a(n);
        ll sum=0;
        fori(i,0,n){
            cin>>a[i].first;
            sum+=a[i].first;
            a[i].second=0;
        }
        ll baap=0,tt=0;
        fori(j,1,q+1)
        {
            ll mode;
            cin>>mode;
            if (mode==2)
            {
                ll x;
                cin>>x;
                sum=n*x;
                tt=j;
                baap=x;
                cout<<sum<<endl;
            }
            else{
                ll pp,x;
                cin>>pp>>x;
                pp-=1;
                if (a[pp].second<tt)
                {
                    sum = sum+x-baap;
                }
                else{
                    sum=sum+x-a[pp].first;
                }
                a[pp].first=x;
                a[pp].second=j;
                cout<<sum<<endl;
            }
        
    }

    return 0;
}
