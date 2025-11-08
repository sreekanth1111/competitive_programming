#include<bits/stdc++.h>

using namespace std;



int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<vector<long long>> a(n);
        vector<long long> b(n), c(n);

        for(int i=0; i<n; i++){
            cin >> b[i];
            a[i].resize(b[i]);
            c[i] = -1e9;
            for(int j=0; j<b[i]; j++){
                cin >> a[i][j];
                c[i] = max(c[i],a[i][j]-j);
            }
        }

        vector<pair<long long, long long>> p(n);
        for(int i=0; i<n; i++){
            p[i] = {c[i],b[i]};
        }

        sort(p.begin(),p.end());
        long long ans = p[0].first+1;
        long long val = ans + p[0].second;
        for(int i=1; i<n; i++){
            long long diff = p[i].first + 1 - val;
            if(diff>0){
                ans += diff;
                val += diff;
            }
            val += p[i].second; 
        }

        cout << ans << endl;
    }
    
}