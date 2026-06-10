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
        string s;
        cin>>s;
        ll ma=0,mi=LONG_LONG_MAX;
        vector<int>fr(26,0);
        fori(i,0,n)
        {
        fr[s[i]-'a']++;
        }
        string ans ="";
        fori(i,0,26)
        {
            if(fr[i]==0)
            {
                ans=char(i+'a');
                break;
            }
        }
        for(char i = 'a';i<='z';i++)
        {
            for(char j = 'a';j<='z';j++)
            {
                string te = "";
                te.push_back(i);
                te.push_back(j);

                if (ans == "" && s.find(te) == string::npos) {
					ans = te;
				}
            }
        }
        for(char i = 'a';i<='z';i++)
        {
            for(char j = 'a';j<='z';j++)
            {
                for(char k = 'a';k<='z';k++)
                {
                string te = "";
                te.push_back(i);
                te.push_back(j);
                te.push_back(k);

                if (ans == "" && s.find(te) == string::npos) {
					ans = te;
				}
            }
        }
    }
        cout<<ans<<endl;

    }

    return 0;
}
