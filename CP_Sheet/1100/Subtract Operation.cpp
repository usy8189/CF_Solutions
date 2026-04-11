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
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
        fori(i,0,n){
            cin>>a[i];
        }
        map <ll,bool> freq;
        bool found=false;
        fori(i,0,n)freq[a[i]]=true;
        fori(i,0,n){
            if (freq.find(a[i]-k)!=freq.end())
            {
                found = true;
                break;
            }
        }
        if (found)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
