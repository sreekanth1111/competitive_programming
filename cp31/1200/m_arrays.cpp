#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,m; cin >> n >> m;
        vector<long long> a(n);
        vector<long long> f(m,0);
        for(int i=0; i<n; i++){
            cin >> a[i];
            a[i] %= m;
            f[a[i]]++;
        }

        long long cnt = 0;
        if(f[0]!=0) cnt++;
        for(int i=1; i<=m/2; i++){
            if(i==m-i && f[i]!=0){
                cnt++; continue;
            }
            long long x = f[i] , y = f[m-i];
            long long diff = abs(x-y);

            if(x==0 && y==0) continue;

            if(x>0 && y>0) cnt += max(1LL,diff);
            else cnt += diff;
        }

        
        cout << cnt << endl;

    }
    
}