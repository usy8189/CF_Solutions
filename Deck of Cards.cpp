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
        ll n,k;
        cin>>n>>k;
        string s, ans(n,'+');
        cin>>s;
        ll t=0,b=n-1;
        fori(i,0,k)
        {   
            if (s[i]=='0')
            {
                ans[t]='-';
                t++;
            }
            if (s[i]=='1')
            {
                ans[b]='-';
                b--;
            }
            if (s[i]=='2')
            {
                ans[t]='?';
                ans[b]='?';
                t++;
                b--;
            }
        }
        if (n==1)ans='-';
        ll l=0,r2=n-1,r=-1,l2=-1;
        fori(i,0,n)
        {
            if (ans[i]=='+'){
                r=i-1;
            }
            if(r!=-1 && ans[i]!='+')
            {
                l2=i;
                break;
            }
        }
        while(l < r) {
        if(ans[l] == '-') {
            l++;
        }

        else if(ans[r] == '-') {
            swap(ans[l], ans[r]);
            l++;
            r--;
        }

        else {
            r--;
        }
    }
    while(l2 < r2) {

        if(ans[r2] == '-') {
            r2--;
        }

        else if(ans[l2] == '-') {
            swap(ans[l2], ans[r2]);
            l2++;
            r2--;
        }

        else {
            l2++;
        }
    }
        cout<<ans<<endl;
    }
    return 0;
}
