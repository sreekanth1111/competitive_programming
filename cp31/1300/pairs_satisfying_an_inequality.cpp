#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        vector<pair<long long, long long>> res;
        for(int i=0; i<n; i++){
            if(a[i]<(i+1)){
                res.push_back({a[i],i+1});
            }
        }

        sort(res.begin(),res.end());
        long long ans = 0;
        long long size = res.size();
        for(auto it : res){
            long long x = it.second;
            int ind = upper_bound(res.begin(),res.end(),make_pair(x,LLONG_MAX))-res.begin();
            ans += size - ind;
        }

        cout << ans << endl;

        
    }
    
}