#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,k; cin >> n >> k;
        vector<long long> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        vector<long long> freq(31,0);
        for(int i=0; i<n; i++){
            long long val = a[i];
            for(int j=0; j<=30; j++){
                if(val&(1LL<<j)) freq[j]++;
            }
        }

        long long ans = 0;
        for(int i=30; i>=0; i--){
            if(k>=(n-freq[i])){
                k -= (n-freq[i]);
                ans += (1LL << i);
            }
        }

        cout << ans << endl;

        
    }
    
}