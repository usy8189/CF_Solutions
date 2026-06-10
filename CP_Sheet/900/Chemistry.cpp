#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
         int n,k;
         int sum=0;
            cin>>n>>k;
            string s;
            cin>>s;
            map<char,int> mp;
            for(int i=0;i<n;i++){
                mp[s[i]]++;
            }   
            for (auto it : mp) {
            sum += it.second%2;
            }
    
    if (sum>k+1 ) {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        
    }
}   
return 0 ;
}