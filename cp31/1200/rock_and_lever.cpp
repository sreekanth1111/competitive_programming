#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n);
        map<long long, long long> mp;

        for(int i=0; i<n; i++) cin >> a[i];

        for(int i=0; i<n; i++){
            long long pos = 63;
            pos -= __builtin_clzll(a[i]);
            mp[pos]++;
        }

        long long ans = 0;
        for(auto &p : mp){
            long long cnt = p.second;
            ans += (cnt*(cnt-1))/2;
        }

        cout << ans << endl;

    }
    
}