#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<vector<long long>> a(n);
        vector<long long> b(n);
        unordered_map<long long, long long> mp;
        for(int i=0; i<n; i++){
            cin >> b[i];
            a[i].resize(b[i]);
            for(int j=0; j<b[i]; j++){
                cin >> a[i][j];
                mp[a[i][j]]++;
            }
        }

        long long cnt = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<b[i]; j++){
                if(mp[a[i][j]]==1){
                    cnt++; break;
                }
            }
        }

        cout << (cnt == n ? "NO" : "YES") << endl;
        
    }
    
}