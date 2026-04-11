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
        ll n,k;
        cin>>n>>k;
        ll maxi=0,even_count=0;
        bool divisible=false;
        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if (a[i]%k>maxi){
                maxi=a[i]%k;
            }
            if (a[i]%k==0){
                divisible=true;
            }
            if (a[i]%2==0){
                even_count++;
            }
        }
        if (divisible){
            cout<<0<<endl;
        }
        else if (k == 4)
		{
			if (even_count >= 2)
				cout<<0<<endl;
			else if (even_count == 1)
				cout<<min (k-maxi, 1ll)<<endl;
			else if (even_count == 0)
				cout<<min(k-maxi, 2ll)<<endl;
		}
        else{
            cout<<k-maxi<<endl;
        }


    }
    return 0;
}