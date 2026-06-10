//by Ujjwal Singh Yadav

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define fori(i, a, b) for (ll i = a; i < b; i++)
#define lun ll n;cin>>n;vector<ll>a(n);fori(i,0,n)cin>>a[i]
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
        lun;
        ll m = a[0];
        vector<ll> ans(n);
        fori(i,0,n)
        {
            if (a[i] > m)
            {
                ans[i] = 0;
                m = a[i];
            }
            else
            {
                ans[i] = m - a[i];
            }
        }
        sort(all(ans));
        ll idx = -1;
        fori(i,0,n)
        {
            if (ans[i] > 0)
            {
                idx = i;
                break;
            }
        }
        if (idx == -1)
        {
            cout << 0 << endl;
            continue;
        }
        ans.erase(ans.begin(), ans.begin() + idx);
        ll sz = ans.size()+1;
        ll fnl = 0;
        for (ll i = ans.size() - 1; i > 0; i--)
        { 
            ans[i] -= ans[i - 1];
        }
        fori(i,0,ans.size())
        {
            fnl += sz * ans[i];
            sz--;
        }
        cout << fnl << endl;
    }
    return 0;
}