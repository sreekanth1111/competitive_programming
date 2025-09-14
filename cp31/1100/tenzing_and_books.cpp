#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,x; cin >> n >> x;
        vector<long long> a(n),b(n),c(n);

        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];
        for(int i=0; i<n; i++) cin >> c[i];

        long long val = 0;
        for(int i=0; i<n; i++){
            if((x|a[i])!=x) break;
            val |= a[i]; 
        }
        for(int i=0; i<n; i++){
            if((x|b[i])!=x) break;
            val |= b[i]; 
        }
        for(int i=0; i<n; i++){
            if((x|c[i])!=x) break;
            val |= c[i]; 
        }
        
        if(val==x) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    
}