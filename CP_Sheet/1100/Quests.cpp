#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n,k,maxi=0,ans=0;
        cin >> n >> k;
        vector<ll> a(n), b(n), c(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if(i>0)
            a[i]=a[i-1]+a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
            if (i==0){
                c[i]=i;
                maxi=b[i];}
            else{
                if(b[i]>maxi){
                    maxi=b[i];
                    c[i]=i;
                }
                else c[i]=c[i-1];
            }
        }
        for (ll i = 0; i < n; i++)
        {
            ans = max(ans, a[i]+(k-1)*b[c[i]]);
            k--;
            if(k==0) break;
        }
        cout << ans << endl;

    }

    return 0;
}
