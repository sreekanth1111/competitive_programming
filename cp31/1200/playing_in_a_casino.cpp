#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        int n,m; cin >> n >> m;
        vector<vector<long long>> a(n,vector<long long>(m));

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++) cin >> a[i][j];
        }

        long long total = 0;
        vector<long long> b(n),p(n);

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++) b[j] = a[j][i];
            sort(b.begin(),b.end());
            p[0] = b[0];
            for(int j=1; j<n; j++) p[j] = p[j-1]+b[j];
            for(int j=0; j<n; j++) total += b[j]*(j+1)-p[j];
        }

        cout << total << endl;
    }
}