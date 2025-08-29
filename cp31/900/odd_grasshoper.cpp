#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long x, n; cin >> x >> n;

        long long val = 0;
        if(n%4==0) val = 0;
        else if(n%4==1) val = -n;
        else if(n%4==2) val = -(n-1) + n;
        else val = -(n-2) + (n-1) + n;

        if(x%2==0){
            cout << x + val << endl;
        }
        else{
            cout << x - val << endl;
        }

    }
    
}