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
        ll n;
        cin >> n;

        vector<ll> a(n);
        ll count_negatives = 0;
        ll count_zeros = 0;
        ll mini = LLONG_MAX;
        for (ll i = 0; i < n; i++){
            cin >> a[i];
            if (a[i] < 0) {
                count_negatives++;
            }
            if (a[i] == 0) {
                count_zeros++;
            }
            mini = min(mini, abs(a[i]));
        }
       
      ll sum = 0;
      for (ll i = 0; i < n; i++){
            sum += abs(a[i]);
        }
       if ((count_negatives) % 2 != 0 && count_zeros == 0) {
            cout << sum - 2 * abs(mini) << endl;
        } 
        else {
          cout << sum << endl;  
        }    
    }

    return 0;
}