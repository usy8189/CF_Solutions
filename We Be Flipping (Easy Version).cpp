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
        vector<ll>a(n),ass;
        fori(i,0,n)cin>>a[i];
        ll ans=0; 
        for(int i=n-1;i>=0;i--)
        {
            if (ans %2==0 && a[i]>0)
            {
                ans ++;
                ass.push_back(i+1);
            }
            if (ans %2==1 && a[i]<0)
            {
                ans ++;
                ass.push_back(i+1);
            }
        }
        cout<<ans<<endl;
        fori(i,0,ans)
        {
            cout<<ass[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
