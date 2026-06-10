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
        sort(a.begin(),a.end());
        ll temp=a[((n+1)/2)-1];
        ll l=0,r=0;
        fori(i,0,((n+1)/2)-1)
        {
            if(a[i]!=temp)l++;
        }
        fori(i,((n+1)/2)-1,n)
        {
            if(a[i]!=temp)r++;
        }
       cout<<max(l,r)<<endl;
    }
    return 0;
}
