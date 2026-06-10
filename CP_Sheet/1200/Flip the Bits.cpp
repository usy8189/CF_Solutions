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
        cin >> n;
        string a,b;
        cin >> a >> b;
        vector<bool>is(n,false);
        ll zz=0,oo=0;
        fori(i,0,n)
        {
            if (a[i]=='1')oo++;
            else zz++;
            if(oo==zz)is[i]=true;
        }
        bool ff=false,poss=true;
        for(int i=n-1;i>=0;i--)
        {
            if (ff==false)
            {
                if(a[i]!=b[i])
                {
                    if (is[i])
                    {
                        ff ^=true;
                    }
                    else {
                        poss=false;
                        break;
                    }
                }
            }
            else{
                if (a[i]==b[i])
                {
                    if (is[i])
                    {
                        ff ^=true;
                    }
                    else
                    {
                        poss=false;
                        break;
                    }
                }
            }
        }
        if (poss)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


        
    }

    return 0;
}
