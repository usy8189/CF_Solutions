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
    {   string s;
        cin>>s;
        ll n=s.size();
        ll count=0;
        fori(i,0,n-1)
        {
            if (s[i]==s[i+1])count++;
        }
        if (count <=1)YYY
        else if (count>=3)NNN
        else 
        {
            ll q=-1,w=-1;
            fori(i,0,n-1)
            {
                if (s[i]==s[i+1])
                {
                    q=i+1;
                    break;
                }
            }
            fori(i,q,n-1)
            {
                if(s[i]==s[i+1])
                {
                    w=i;
                    break;
                }
            }
            string s1=s,s2=s;
            reverse(s1.begin()+q,s1.begin()+w);
            fori(i,q,w)
            {
                if (s2[i]=='a')s2[i]='b';
                else s2[i]='a';
            }
            reverse(s2.begin()+q,s2.begin()+w);
            if (s1==s|| s2==s)YYY
            else NNN
            
        }
    }
    return 0;
}
