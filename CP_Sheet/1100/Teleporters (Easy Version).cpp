#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        ll n,c;
        cin >> n >> c;

        vector<ll>a(n),b(n);

        for (int i=0;i<n;i++) cin>>a[i];
        
        for (int i=0;i<n;i++) {
            b[i]=i+1+a[i];
        }
        sort(b.begin(),b.end());
        ll ans=0,sum=0;
        for (int i=0;i<n;i++) {
            sum += b[i];
            if (sum <= c) ans++;
            else break;
        }
        cout << ans << endl;


    }

    return 0;
}