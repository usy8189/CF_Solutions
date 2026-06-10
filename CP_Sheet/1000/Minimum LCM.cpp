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

        ll a=1;;
    
            for (ll i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i <= n / 2) a = max(a, i);
                if (n / i <= n / 2) a = max(a, n / i);
            }
        }
            
        cout <<a<< " "<<n-a<<endl;

    }

    return 0;
}