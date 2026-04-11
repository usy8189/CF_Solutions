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
        vector<ll>a(n);
        fori(i,0,n)cin>>a[i];
        ll count=0;
        if (n==1)cout<<1<<endl;
        else if(n==2 && a[0]==a[1])cout<<1<<endl;
        else if(n==2 && a[0]!=a[1])cout<<2<<endl;
        else{
        vector<int>slope;    
        fori(i,1,n){
            if (a[i]>a[i-1])slope.push_back(+1);
            else if(a[i]<a[i-1])slope.push_back(-1);
            else slope.push_back(0);
        }
        vector<int>nonzero;
        fori(i,0,slope.size())
        {
            if(slope[i]!=0)nonzero.push_back(slope[i]);
        }  
         fori(i,1,nonzero.size())
         {
            if (nonzero[i]!=nonzero[i-1])count++;
         }     
        if (count==0 && a[0]==a[n-1])cout<<1<<endl;
        else if (count==0 && a[0]!=a[n-1])cout<<2<<endl;
        else cout<<1+(count+1)<<endl;
        }
   }
    return 0;
}
