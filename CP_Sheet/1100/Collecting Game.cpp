#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
       ll n;
       cin >> n;
       vector<pair<ll , ll>> a(n);
         for(int i = 0 ; i < n ; i++)
         {
              cin >> a[i].first;
              a[i].second = i ;
         } 
         sort(a.begin() , a.end());
         vector<pair<ll , ll>> b(n);
         for(int i = 0 ; i < n ; i++)
         {      
              b[i].second = a[i].second;

              if(i == 0)
              {
                   b[i].first = a[i].first;
              }
              else
              {
                   b[i].first = b[i-1].first + a[i].first;
              }
         }
         vector<ll> ans(n); 

		
		for (int i = 0; i < n; i++) { 
			int j = i;
			int found = i;
			while (j < n) {
				pair<ll, ll> temp = {b[j].first + 1, INT_MIN};
				ll idx = lower_bound(a.begin(), a.end(), temp) - a.begin();
				idx--;
				if (idx == j) {
					break;
				}
				found += idx - j;
				j = idx;
			}
			ans[a[i].second] = found;
		}

		
		for (int i = 0; i < n; i++) { 
			cout << ans[i] << " ";
		}
		cout << endl;

    }

    return 0;
}
