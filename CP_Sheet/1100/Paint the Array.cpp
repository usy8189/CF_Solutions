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
        int n;
        cin>>n;
        vector<ll>a(n);
        fori(i,0,n){
            cin>>a[i];
        }
        ll gcdo=0,gcde=0;

        for (int i=0;i<n;i+=2)
        {
            gcdo=__gcd(gcdo,a[i]);
        }
        for (int i=1;i<n;i+=2)
        {   
            gcde=__gcd(gcde,a[i]);
        }
        bool checko=true,checke=true;
        for (int i=0;i<n;i+=2)
        {
            if (a[i]%gcde==0)
            {
                checko=false;
                break;
            }
        }
        if (checko){
            cout<<gcde<<endl;
            continue;
        }
        for (int i=1;i<n;i+=2)
        {if (a[i]%gcdo==0)
            {
                checke=false;
                break;
            }
        }
        if (checke){
            cout<<gcdo<<endl;
        }
        else cout<<0<<endl;   
           

    }

    return 0;
}
