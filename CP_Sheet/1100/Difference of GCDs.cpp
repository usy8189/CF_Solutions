#include <bits/stdc++.h>
#define ll long long
#define fori(i, a, b) for (ll i = a; i < b; i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n,l,r;
        cin>>n>>l>>r;
        bool possible = true;
        vector<ll>ans(n);
        fori(i,1,n+1){
            ans[i-1]=((l+i-1)/i)*i;
            if (ans[i-1]>r)possible=false;
        }
        if (possible){
            cout<<"YES"<<endl;
            fori(i,0,n)cout<<ans[i]<<" ";
            cout<<endl;
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}
