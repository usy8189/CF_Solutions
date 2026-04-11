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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        vector<ll>freq(26,0);
        vector<ll>dist(n);
        ll ans=0;
        ll dis=0;
        for(ll i=0;i<n;i++)
        {
            if (freq[s[i]-'a']==0)
            { dis++;
               freq[s[i]-'a']++;
            }
            else freq[s[i]-'a']++;
            dist[i]=dis;
        }
        for(int i=0;i<n;i++)
        {
            ans += dist[i];
        }
        cout<<ans<<endl;
        
    }

    return 0;
}
