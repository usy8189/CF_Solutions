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
        int a,b;
        cin >> a >> b;
        int xorsum =0;
        int t=a-1;
        if(t%4==0){
            xorsum = t;
        }
        else if(t%4==1){
            xorsum = 1;
        }
        else if(t%4==2){
            xorsum = t+1;
        }
        else{
            xorsum = 0;
        }
        
        if(xorsum==b){
            cout << a << endl;
        }
        else if((xorsum^b)==a){
            cout << a+2 << endl;
        }
        else{
            cout << a+1 << endl;
        }
    }

    return 0;
}