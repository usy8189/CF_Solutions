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
        vector<int> w(n);
        ll suml=0,sumr=0,idxl=0,idxr=n-1,ans=0;
        fori(i,0,n){
            cin>> w[i];  
        }
        while(idxl <= idxr){
            if (suml>sumr)
            {
                sumr+=w[idxr];
                idxr--;
            }
            else {
                suml += w[idxl];
                idxl++;
            }

            if (suml == sumr)
            {
                ans = max (ans,idxl+(n-idxr)-1);
            }
        }
        cout<<ans<<endl;
        
        

    }

    return 0;
}
