#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define fori(i, a, b) for (ll i = a; i < b; i++)
const ll INF = 1e18;
const ll MOD = 1e9 + 7;

using namespace std;

bool is_pal(vector<ll> b,ll x)
{   
    vector<ll>a;
    fori(i,0,b.size()){
        if (b[i]!=x)
        {
            a.push_back(b[i]);
        }
    }
    ll left=0,right = a.size()-1;
    bool is = true;
    while(right>left){
        if (a[left]!=a[right])
        {
            is = false;
            break;
        }
            left++;
            right--;
    }
    return is;
}

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
        ll left=0,right = a.size()-1;
        bool is = true;
        bool ans;
        while(right>left){
        if (a[left]!=a[right])
        {
            is = false;
            ans = is_pal(a,a[left])||is_pal(a,a[right]);
            break;
        }
            left++;
            right--;
        }
        if (is)cout<<"YES"<<endl;
        else if (ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }

    return 0;
}
