#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,x,y; cin >> n >> x >> y;
        vector<long long> a(n);
        map<pair<long long,long long>,long long> mp;

        for(int i=0; i<n; i++) cin >> a[i];


        long long ans = 0;
        long long rx,ry,need;
        for(int i=0; i<n; i++){
            rx = a[i]%x;
            ry = a[i]%y;
            need = (x-rx)%x;
            ans += mp[{ry,need}];
            mp[{ry,rx}]++;
        }

        cout << ans << endl;

    }
    
}