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
        ll n;
        cin>>n;
        vector<ll>a(n),prefix(n+1);
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        prefix[0]=0;
        for(ll i=0;i<n;i++)
        {
            prefix[i+1]=prefix[i]+a[i];
        }
        ll gcd=0;
        for(ll i=1;i<n;i++)
        {
            ll temp = __gcd(prefix[i],sum-prefix[i]);
            gcd=max(gcd,temp);
        }
        cout << gcd << endl;
    }

    return 0;
}
