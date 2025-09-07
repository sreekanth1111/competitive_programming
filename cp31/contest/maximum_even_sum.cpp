#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long a,b; cin >> a >> b;
        long long val = 0;

        if(b%2!=0){
            val = a*b+1;
            if(val%2==0) cout << val << endl;
            else cout << -1 << endl;
        }
        else{
            val = a*(b/2)+2;
            if(val%2==0) cout << val << endl;
            else cout << -1 << endl;
        }

    }
}