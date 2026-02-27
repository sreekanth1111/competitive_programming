#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,k; cin >> n >> k;
        vector<long long> a;
        for(int i=0; i<n; i++){
            long long val; cin >> val;
            a.push_back(val);
        }

        sort(a.begin(),a.end());
        long long minval = a[0];
        long long ans = 1e18;
        if(k == 1){
            for(int i=0; i<n-1; i++){
                ans = min(ans, 1ll * abs(a[i+1]-a[i]));
            }
            ans = min(minval,ans);
            cout << ans << endl;
        }
        else if(k == 2){
            ans = minval;
            for(int i=0; i<n-1; i++){
                ans = min(ans, 1ll * abs(a[i+1]-a[i]));
            }

            long long d = 1e18;
            for(int i=0; i<n-1; i++){
                for(int j=i+1; j<n; j++){
                    d = abs(a[i]-a[j]);
                    
                    auto it = lower_bound(a.begin(),a.end(),d);
                    if(it != a.end()){
                        ans = min(ans,abs(*it-d));
                    }
                    if(it != a.begin()){
                        --it;
                        ans = min(ans,abs(*it-d));
                    }
                }
            }
            cout << ans << endl;
        }
        else{
            cout << 0 << endl;
        }
        

    }
    
}