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
        ll l=0,r=n-1;
        ll min=1,max=n;bool ans= false;
        while(r>l)
        {   
            if(a[l]!=max && a[l]!=min && a[r]!=max && a[r]!=min )
            {   
                ans=true;
                cout<<l+1<<" "<<r+1<<endl;
                break;
            }
            if(a[l]==max){max--;l++;}
            else if(a[l]==min){min++;l++;}
            else if(a[r]==max){max--;r--;}
            else  if(a[r]==min){min++;r--;}
        }
        if(!ans)cout<<-1<<endl;  
       
    }

    return 0;
}
