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
        ll w,h;
        cin >> w >> h;
        ll l1l,l2l,r1l,r2l;
        cin>>l1l;
        vector<ll> l1(l1l);
        for(int i=0;i<l1l;i++)        {
            cin >> l1[i];
        }
        cin>>l2l;
        vector<ll> l2(l2l);
        for(int i=0;i<l2l;i++)        {
            cin >> l2[i];
        }
        cin>>r1l;
        vector<ll> r1(r1l);
        for(int i=0;i<r1l;i++)        {
            cin >> r1[i];
        }
        cin>>r2l;
        vector<ll> r2(r2l);
        for(int i=0;i<r2l;i++)        {
            cin >> r2[i];
        }
        
        ll l1max=(l1[l1l-1]-l1[0])*h;
        ll l2max=(l2[l2l-1]-l2[0])*h;
        ll r1max=(r1[r1l-1]-r1[0])*w;
        ll r2max=(r2[r2l-1]-r2[0])*w;
        cout << max({l1max,l2max,r1max,r2max}) << "\n";

    }

    return 0;
}