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
        string s;
        cin >> s;
        int n = s.length();
        int count0 = 0, count1 = 0;
        for (char c : s)
        {
            if (c == '0')
                count0++;
            else
                count1++;
        }
        int length=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0' && count1>0){
                count1--;
                length++;
            }
            else if(s[i]=='1' && count0>0){
                count0--;
                length++;
            }
            else {
                break;
            }
            
        }
        cout << n-length << "\n";
    }

    return 0;
}