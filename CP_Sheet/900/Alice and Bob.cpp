#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
       int n,a,l=0,r=0;
       cin >> n >> a;
       vector<int> v(n);
       for(int i=0;i<n;i++)
       {
            cin >> v[i];
            if(v[i]<a)
                l++;
            else if(v[i]>a)
                r++;
       }
       if(l>r)
       cout<<a-1<<"\n";
       else
       cout<<a+1<<"\n";
       
    }

return 0 ;
}