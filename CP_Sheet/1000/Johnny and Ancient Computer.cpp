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
        ll a,b;
        cin >> a >> b;
        ll maximum = max(a,b);
        ll minimum = min(a,b);
        if(maximum%minimum!=0)
        {
            cout << -1 << endl;
        }
        else if(maximum==minimum)
        {
            cout << 0 << endl;
        }
        else
        {
            ll count = 0;
            ll temp = maximum/minimum;
            ll count8 = 0;
            ll count4 = 0;
            ll count2 = 0;
            while(temp%2==0)
            {
                count++;
                temp/=2;
            }
            if(temp!=1)
            {
                cout << -1 << endl;
            }
            else
            {
                count8 = count/3;
                count4 = (count%3)/2;
                count2 = (count%3)%2;
                cout << count8 + count4 + count2 << endl;
            }
            
        }
       
    }

    return 0;
}
