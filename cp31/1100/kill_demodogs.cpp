#include<bits/stdc++.h>

using namespace std;

#define MOD 1000000007

long long mul(long long a, long long b){
    return (a % MOD) * (b % MOD) % MOD;
}

int main(){
    int t; cin >> t;
    long long inv2 = 500000004;
    long long inv3 = 333333336;

    while(t--){
        
        long long n; cin >> n;
        n--;

        long long term1 = mul(mul(mul(n,n+1),2*n+1),inv3);
        long long term2 = mul(mul(n,n+1),inv2);
        long long term3 = mul(n+1,n+1);
        long long val = (term1 + term2 + term3) % MOD;

        cout << (2022*val)%MOD << endl;
        
    }
    
}