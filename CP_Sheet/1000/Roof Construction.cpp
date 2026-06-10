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
        ll n;
        cin>>n;
        int maxi=0;
        while(( pow(2, maxi)) < n){
            maxi++;
        }
        for (int i=n-1; i>pow(2, maxi-1); i--){
                cout<<i<<" ";
            }
        cout<<pow(2, maxi-1)<<" ";
        for (int i=0; i<pow(2, maxi-1); i++){
                cout<<i<<" ";
            }
        
    
    cout << endl;
 }

    return 0;
}