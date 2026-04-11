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
        ll n;
        cin>>n;
        vector<int>p(n),a(n);
        fori(i,0,n)cin>>p[i];
        fori(i,0,n)cin>>a[i];
        bool ans=true;
        fori(i,1,n-1){
            if (a[i]!=p[i])
            {
                if (a[i]!=p[i+1] || a[i]!=p[i-1])
                {
                   ans =false;
                }
            }
        }
        
        if(a[0]!=p[0] && p[1]!=a[0])ans=false;
        if(a[n-1]!=p[n-1] && p[n-2]!=a[n-1])ans=false;

        if (ans)YYY
        else NNN

    }

    return 0;
}
