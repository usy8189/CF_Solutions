//by Ujjwal Singh Yadav 

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define fori(i, a, b) for (ll i = a; i < b; i++)
#define YYY cout<<"YES"<<endl;
#define NNN cout<<"NO"<<endl;
#define LUN vector<ll>a(n);fori(i,0,n)cin>>a[i];
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
        ll n,k;
        cin>>n>>k;
        LUN
        vector<ll>p(k);
        fori(i,0,k)
        {
            cin>>p[i];
            p[i]--;
        }
        ll ans=0;
        ll l=0;
        fori(i,0,k-1)
        {   
            ll temp=0;
            ll r=p[i];
            while(r>l)
            {   
                if (a[l]!=a[l+1])temp++;
                l++;
            }
            if (temp%2!=0)temp++;
            ans=max(ans,temp);
        }
        ll r=n-1,temp=0;
         while(r>l)
            {   
                if (a[l]!=a[l+1])temp++;
                l++;
            }
            if (temp%2!=0)temp++;
       if (k > 1)
        {
            ll maxi = 1, curr = 1;
            for (ll i = 1; i < n; i++)
            {
                if (a[i] == a[i - 1]) curr++;
                else
                {
                    maxi = max(maxi, curr);
                    curr = 1;
                }
            }
            maxi = max(maxi, curr);
            ans += (maxi - 1);
        }
        cout << ans << "\n";
    
    }

    return 0;
}
