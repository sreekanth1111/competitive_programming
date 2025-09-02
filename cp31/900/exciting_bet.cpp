#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long a,b; cin >> a >> b;

        if(a==b) cout << 0 << " " << 0 << endl;
        else{
            long long d = abs(a-b);
            cout << d  << " "  << min(a%d,d-(a%d)) << endl;

        }

        
    }
    
}