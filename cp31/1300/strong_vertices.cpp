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
        
        long long n; cin >> n;
        vector<long long> a(n+1),b(n+1);
        vector<pair<long long, long long>> res;

        for(int i=1; i<=n; i++) cin >> a[i];
        for(int i=1; i<=n; i++) cin >> b[i];

        for(int i=1; i<=n; i++){
            res.push_back({a[i]-b[i],i});
        }

        sort(res.rbegin(),res.rend());
        long long val = res[0].first;
        vector<long long> ans;
        for(int i=0; i<n; i++){
            if(res[i].first==val) ans.push_back(res[i].second);
            else break;
        }

        sort(ans.begin(),ans.end());
        cout << ans.size() << endl;
        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    
}