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
       int k,a1,a2,b1,b2;
       cin >>k>>a1>>b1>>a2>>b2;
        int bb=0,aa=0;
        if(a1>b1)aa++;
        else bb++;
        if(a2>b2)aa++;
        else bb++;
        if(b1+b2+k>a1+a2)cout<<"YES"<<endl;
        else if (b1+b2+k==a1+a2)
        {
            if(bb>0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;

    }

    return 0;
}
