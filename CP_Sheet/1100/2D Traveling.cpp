#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll dist(pair<pair<ll,ll>,ll> a, pair<pair<ll,ll>,ll> b,ll k)
{   if (a.second < k && b.second < k)
        return 0;
    return abs(a.first.first - b.first.first) + abs(a.first.second - b.first.second);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n,k,a,b;
        cin >> n >> k >> a >> b;
        a--;b--;
        vector<pair<pair<ll,ll>,ll>> v;
        ll min1=LLONG_MAX, min2=LLONG_MAX;
        for (ll i = 0; i < n; i++)
        {
            ll x,y;
            cin >> x >> y; 
            v.push_back({{x,y},i});
        }
        if (k==0)
        {
            cout<<dist(v[a],v[b],k)<<endl;
        }
        else{
        for(ll i=0;i<k;i++)
        {
            min1= min((dist(v[i],v[a],k)),min1);
            min2= min((dist(v[i],v[b],k)),min2);
        }
        cout<<min(min1+min2,dist(v[a],v[b],k))<<endl;
        }
        

    }

    return 0;
}
