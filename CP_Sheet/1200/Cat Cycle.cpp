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
        ll n,k;
        cin>>n>>k;
        if (n%2!=0 && k>n/2)
            k+=((k - ((n/2) + 1)) / (n/2)) + 1;
        
        if(k%n>0)
            cout<<(k%n)<<endl;
        else cout<<n<<endl;
    }

    return 0;
}
