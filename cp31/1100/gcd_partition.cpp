#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n+1,0),p(n+1,0);
        long long sum = 0;
        
        for(int i=1; i<=n; i++){
            cin >> a[i];
            p[i] = p[i-1] + a[i];
        }
        sum = p[n];

        long long ans = 1;
        for(int i=1; i<n; i++){
            ans = max(ans,gcd(p[i],sum));
        }

        cout << ans << endl;

        
        



    }
    
}