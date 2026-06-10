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
        int n,temp=0;
        cin >> n;
        vector<int> a(n),ans(n);
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
            ans[i] = i+1;
        }
        for(auto i : freq) {
            if(i.second < 2) {
                temp=1;
                cout<<-1<<endl;
                break;
            }
        }
        if(temp) continue;
        for (int i = 0; i < n; i++){
            if(i+1 < n && a[i]==a[i+1]) {
                swap(ans[i], ans[i+1]);
            }
        }
        for (int i = 0; i < n; i++){
            cout<<ans[i]<<" ";
        }        
        cout<<endl;
    
    }

    return 0;
}