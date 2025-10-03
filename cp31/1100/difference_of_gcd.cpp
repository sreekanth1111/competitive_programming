#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,l,r; cin >> n >> l >> r;
        vector< long long > ans(n+1,0);
        long long size = 0;
        
        for(int i=1; i<=n; i++){
            long long val = ((l+i-1)/i)*i;
            if(val<=r){
                ans[i] = val;
                size++;
            }
        }

        if(size==n){
            cout << "YES" << endl;
            for(int i=1; i<=n; i++) cout << ans[i] << " ";
            cout << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
    }
    
}