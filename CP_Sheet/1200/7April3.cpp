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
        ll n,m,a,b;
        cin>>n>>m>>a>>b;
        if(__gcd(n,a)==1 && __gcd(m,b)==1 && __gcd(n,m)<=2)YYY 
        else NNN
    }

    return 0;
}
