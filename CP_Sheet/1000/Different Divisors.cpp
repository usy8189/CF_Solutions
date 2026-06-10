#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll isprime(ll n)
{
    if (n <= 1)
        return 0;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        ll a = 1 + d;
        while (!isprime(a))
            a++;
        ll b = a + d;
        while (!isprime(b))
            b++;
        
        ll ans = a * b;
        cout << ans << "\n";    

    }

    return 0;
}
