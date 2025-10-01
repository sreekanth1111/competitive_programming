#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n);
        map<long long, long long> mp;
        
        for(int i=0; i<n; i++){
            cin >> a[i];
            mp[a[i]] = i+1;
        }

        long long maxval = -1;
        for(auto &p : mp){
            for(auto &t : mp){
                if(gcd(p.first,t.first)==1){
                    maxval = max(maxval,p.second+t.second);
                }
            }
        }

        cout << maxval << endl;

        
    }
    
}