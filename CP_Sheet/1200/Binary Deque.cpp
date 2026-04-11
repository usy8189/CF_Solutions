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
    cin >>t;
    while (t--)
    {
        ll n,s;
        cin>>n>>s;
        vector<ll>a(n),fix(n+1);
        fix[0]=0;
        fori(i,0,n){
            cin>>a[i];
            fix[i+1]=fix[i]+a[i];
        }
        if(fix[n]<s)cout<<-1<<endl;
        else{
            ll ans=0;
            fori(i,0,n){
                ll index=0;
                ll tem=fix[i]+s;
                if(tem>fix[n])break;
                auto it=upper_bound(fix.begin(),fix.end(),tem);
                if (it != fix.begin() ) it--;
                 if (*it == tem) { 
                    index = it - fix.begin(); 
                   } 
                   ans=max(ans,index-i);
                }

                cout<<n-ans<<endl;
            }
            
     
    }

    return 0;
}
