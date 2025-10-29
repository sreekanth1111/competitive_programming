#include<bits/stdc++.h>
#define MOD 998244353

using namespace std;

long long fact(long long n){
    long long res = 1;
    for(int i=2; i<=n; i++){
        res = (res*i)%MOD;
    }
    return res;
}

int main(){
    int t; cin >> t;

    while(t--){
        
        string s; cin >> s;
        long long val = 0, cnt = 1;

        int i=0,j=0;
        while(i<s.length()){
            j = i+1;
            while(j<s.length() && s[i]==s[j]) j++;
            
            long long len = j-i;
            val += (len-1)%MOD;
            cnt = (cnt*len)%MOD;
            i = j;
        }

        cnt = (fact(val)%MOD * cnt%MOD) % MOD;
        cout << val%MOD << " " << cnt << endl;


    }
    
}