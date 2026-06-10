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
        ll n,m;
        cin>>n>>m;
        vector<int>a(n);
        fori(i,0,n)cin>>a[i];
        ll count =1,temp=1;
        fori(i,0,n-1)
        {   
            if (a[i]==a[i+1])temp++;
            else 
            {
                temp=1;
            }
            count=max(count,temp);
        }
        if(count>=m)NNN
        else YYY
    }

    return 0;
}
