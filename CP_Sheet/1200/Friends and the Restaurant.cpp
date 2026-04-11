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
        ll n;
        cin>>n;
        vector<ll>a(n),b(n);
        fori(i,0,n){cin>>a[i];}
        fori(i,0,n){cin>>b[i];}
        vector<ll>diff(n),taken(n,0);
        ll ans=0;
        fori(i,0,n)diff[i]=b[i]-a[i];
        sort(diff.begin(),diff.end());
        ll i=0,j=n-1;

        while(i<j)
        {
            if (diff[i]+diff[j]>=0)
            {
                i++;
                j--;
                ans++;
            }
            else 
            {
                i++;
            }
        }

        cout<<ans<<endl;  
    }

    return 0;
}
