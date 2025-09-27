#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,x; cin >> n >> x;
        vector<long long> a(n),p(n);

        for(int i=0; i<n; i++) cin >> a[i];
        sort(a.begin(),a.end());

        p[0] = a[0];
        for(int i=1; i<n; i++) p[i] = p[i-1] + a[i];

        long long ans = 0, days = 0;
        for(int k=0; k<n; k++){
            if(p[k]>x) break;
            days = ((x-p[k])/(k+1))+1;
            ans += days;
        }
        
        cout << ans << endl;


    }
    
}