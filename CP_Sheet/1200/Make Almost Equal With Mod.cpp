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
        ll even=0,odd=0,max=0;
        vector<ll>a(n);
        fori(i,0,n){
            cin>>a[i];
            if(a[i]%2==0)even++;
            else odd++;
            if(a[i]>max)max=a[i];
        }

        if (odd>0 && even>0)cout<<2<<endl;
        else{
            bool is= true;
            int temp=2;
            while(is && temp <= 60){
                ll it = 1;
                while(it<n)
                {
                ll temp2=a[0]%(1LL << temp);
                if((a[it]%(1LL << temp))!=temp2){
                    cout<<(1LL << temp)<<endl;
                    is = false;
                    break;
                }
                it++;
               }
               temp++;
        }
    }
}

    return 0;
}
