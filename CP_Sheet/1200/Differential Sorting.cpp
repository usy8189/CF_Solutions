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
        ll n;
        cin>>n;
        vector<ll>a(n);
        fori(i,0,n)cin>>a[i];
        if (a[n-2]>a[n-1]){
            cout<<-1<<endl;
            continue;
        }
        else if(a[n-1]>=0){
            cout<<n-2<<endl;
            for(int i=1;i<n-1;i++)
            {
                cout<<i<<" "<<n-1<<" "<<n<<endl;
            }
        }
        else
        {
            if (is_sorted(a.begin(),a.end()))
            {
                cout<<0<<endl;
            }
            else  cout<<-1<<endl;
        }
    }

    return 0;
}
