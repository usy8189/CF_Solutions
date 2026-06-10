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
        bool same=false;
        sort(a.begin(), a.end(), greater<int>());
        fori(i,0,n-1)
        if(a[i]==a[i+1])same=true;
        if(same)cout<<-1<<endl;
        else{
            fori(i,0,n)cout<<a[i]<<" ";
            cout<<endl;
        }
    }

    return 0;
}
