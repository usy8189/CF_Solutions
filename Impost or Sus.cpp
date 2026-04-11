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
        string r;
        cin>>r;
        ll n=r.size();
        ll ct=0,tt=0;
        fori(i,0,n)
        {
            if(r[i]=='u')ct++;
        }
        if (r[0]=='u'){tt++;r[0]='s';}
        if (r[n-1]=='u'){tt++;r[n-1]='s';}
        fori(i,0,n-1)
        {
                if (r[i]=='u' && r[i+1]=='u'){tt++;r[i+1]='s';}
        }
        cout<<min(ct,tt)<<endl;
    }

    return 0;
}
