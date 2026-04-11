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
        fori(i,0,n)
        {
            cin>>a[i];
        }

        ll ans =0;
        ll i=n-1;
        while (i >= 0 && a[i] == a[n - 1]) {
			i--;
		}

		if (i == -1) {
			cout << 0 << endl;
			continue;
		}

		while (i >= 0) {
			i -= (n - 1 - i); 
			ans++; 

		
			while (i >= 0 && a[i] == a[n - 1]) {
				i--;
			}
		}
        cout<< ans << endl;
        
    }

    return 0;
}
