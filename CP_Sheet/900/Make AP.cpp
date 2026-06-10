#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        ll a,b,c;
        cin>>a>>b>>c;
        ll _a=2*b-c, _b=(a+c)/2, _c=2*b - a;
        bool d=false;

        if(_a>0 && _a%a==0)
            d=true;
        if(_b>0 && (a+c)%2==0 && _b%b==0)
            d=true;    
        if(_c>0 && _c%c==0)
            d=true;

        if (d)    
            cout<<"YES\n";
        else
            cout<<"NO\n";
        }    
    
    

return 0 ;
}