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
        string s1,s2;
        cin>>s1>>s2;
        vector<vector<int>> a(2, vector<int>(n, 0));
        fori(i,0,n-1)
        {
            if (((s1[i]=='B' && s1[i+1]=='B' && a[0][i]==0 &&a[0][i+1]==0)||(s1[i]=='R' && s1[i+1]=='R'&& a[0][i]==0 &&a[0][i+1]==0)) && ((s2[i]=='B' && s2[i+1]=='B' && a[1][i]==0 &&a[1][i+1]==0)||(s2[i]=='R' && s2[i+1]=='R'&& a[1][i]==0 &&a[1][i+1]==0)))
            {
                a[0][i]=1;a[0][i+1]=1;
                a[1][i]=1;a[1][i+1]=1;
            }
        }
        fori(i,0,n)
        {
            if ((s1[i]=='B' && s2[i]=='B' && a[0][i]==0 &&a[1][i]==0)||(s1[i]=='R' && s2[i]=='R'&& a[0][i]==0 &&a[1][i]==0))
            {
                a[0][i]=1;a[1][i]=1;
            }
        }
        ll ans=0;
        fori(i,0,2)
        {
            fori(j,0,n)
            {
                if(a[i][j]==0)ans++;
            }
        }
        cout<<ans/2<<endl;
    }
    return 0;
}
