#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,m,k; cin >> n >> m >> k;

        long long ans = (k+n-1)/n;

        long long splits = m-ans+1;

        ans = (ans+splits-1)/splits;

        cout << ans << endl;

    }
    
}