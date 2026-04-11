//by Ujjwal Singh Yadav 

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define fori(i, a, b) for (ll i = a; i < b; i++)
const ll INF = 1e18;
const ll MOD = 1e9 + 7;

using namespace std;

int lcm(ll a, ll b) {
    return (a / __gcd(a, b)) * b; 
}

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
        char c;
        cin>>c;
        string s;
        cin>>s;
        vector<ll>ans;
        bool same = true;
        fori(i,0,n){
            if (s[i]!=c)same = false;
        }
        if (same)cout<<0<<endl;
        else 
        {
            int val = -1;
            for (long long i = 2; i <= n; i++)
            {
                bool is = true;
                for (long long j = i; j <= n; j += i)
                {
                    if (s[j - 1] != c)
                    {
                        is = false;
                        break;
                    }
                }
                if (is)
                {
                    val = i;
                    break;
                }
            } 

            if (val != -1)
            {
                ans.push_back(val);
            }
            else
            {
                ans.push_back(n-1);ans.push_back(n);
            }
            
                cout<<ans.size()<<endl;
                if(ans.size()>0){
                fori(i,0,ans.size())cout<<ans[i]<<" ";
                cout<<endl;
            }
            }
    
    }

    return 0;
}
