#include<bits/stdc++.h>

using namespace std;

#define MOD 1000000007


int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,k; cin >> n >> k;
        long long ans = 1;

        for(int i=0; i<k; i++) ans = (ans*n)%MOD;

        cout << ans << endl;

    }
    
}