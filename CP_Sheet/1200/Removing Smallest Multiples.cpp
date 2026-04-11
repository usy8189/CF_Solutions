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
        string a;
        cin>>a;

        ll ans=0;
        
        vector<int>deleted(n+1,0);

        fori(i,1,n+1)
        {
            for(ll j=i; j<=n; j+=i)
            {
                if (a[j-1] == '1') break;

                if (deleted[j]==0)
                {
                    ans += i;
                    deleted[j] = 1;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
