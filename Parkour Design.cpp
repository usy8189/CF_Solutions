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
        ll x,y;
        cin>>x>>y;
        if (x>0 && abs(y)<x)
        {
        if (y>0) x-=y*2;
        else x+=y*4;
        if (x%3==0 && x>=0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl; 
        }
        else cout<<"NO"<<endl; 
    }

    return 0;
}
