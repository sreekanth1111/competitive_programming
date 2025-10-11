#include<bits/stdc++.h>

using namespace std;

int main(){
    
    long long n,q; cin >> n >> q;
    vector<long long> a(n), b(q);

    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<q; i++) cin >> b[i];

    map<long long, long long> mp;
    for(int i=n-1; i>=0; i--) mp[a[i]] = i+1;

    vector<long long> res(q);
    for(int i=0; i<q; i++){
        res[i] = mp[b[i]];
        long long val = res[i];
        if(val!=1){
            for(auto &p : mp){
                if(p.second<val){
                    p.second++;
                }
            }
        }
        mp[b[i]] = 1;
    }

    for(int i=0; i<q; i++) cout << res[i] << " ";
    cout << endl;

    
}