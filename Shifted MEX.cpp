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
        vector<int>a(n);
        fori(i,0,n)cin>>a[i];
        ll count =0;
        sort(all(a));
        ll temp=0;
        fori(i,0,n-1)
        {   
            if (a[i]+1==a[i+1])temp++;
            else if (a[i]==a[i+1] )continue; 
            else {
                count= max(temp,count);
                temp=0;
            }
        }
        count= max(temp,count);
        cout<<count+1<<endl;
    }

    return 0;
}
