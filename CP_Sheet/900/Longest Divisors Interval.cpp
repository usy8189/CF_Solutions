#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {

    ll n;
    cin >> n;
    int i=1;
    while(n%i==0){
        i++;
    }
    cout << i-1 << "\n";    
   
    
    }
return 0 ;
}



