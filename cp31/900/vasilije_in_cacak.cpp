#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n, k, x; cin >> n >> k >> x;
        long long minsum = 0, maxsum = 0;

        minsum = (k * 1ll * (k+1))/2;
        maxsum = (n* 1ll *(n+1))/2;
        maxsum -= ((n-k)* 1ll *(n-k+1))/2;

        if(x>=minsum && x<=maxsum){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
}