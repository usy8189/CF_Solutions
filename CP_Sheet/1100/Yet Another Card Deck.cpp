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
    
        ll n,q;
        cin>>n>>q;
        vector<int>a(n),b(q);
        fori(i,0,n)cin>>a[i];
        fori(i,0,q)cin>>b[i];
        vector<int>pos(51,INT_MAX);
        fori(i,0,n){
            if (pos[a[i]]==INT_MAX)
            pos[a[i]]=i;
        }
        int temp=-1;
        int temp2;
        fori(i,0,q){
            temp=pos[b[i]];
            temp2=b[i];
            cout<<temp+1 << " ";
        fori(i,0,51)
        {
            if (pos[i]<temp)
            {
                pos[i]++;
            }
        }
        pos[temp2]=0;
        }
        
    return 0;
}
