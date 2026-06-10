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
        ll n,ct=0,ans=0;
        cin>>n;
        string s;
        cin>>s;

        fori(i,0,n) if(s[i]=='1') ct++;
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        if(ct==0){
            cout<<(n+2)/3 <<endl;
            continue;
        }
        ll tt=0,temp=0;
        fori(i,0,n)
        {
            if(s[i]=='0') tt++;
            else{
                if(tt){
                 if(temp > 0) tt -= 2;
                else tt -= 1;
                }
                ans+= (tt+2)/3;
                tt=0;
                temp++;
            }
        }
        if(tt){
            tt -= 1;
            ans+= (tt+2)/3;
        }
        cout<<ans+ct<<endl;
    }
    return 0;
}