#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,m; cin >> n >> m;
        vector<long long> k(n),c(m);
        for(int i=0; i<n; i++) cin >> k[i];
        for(int i=0; i<m; i++) cin >> c[i];
        sort(k.rbegin(),k.rend());

        long long cost = 0;
        int j = 0;
        for(int i=0; i<n; i++){
            if(j+1<=k[i] && c[k[i]-1]>=c[j]){
                cost += c[j];
                j++;
            }
            else{
                cost += c[k[i]-1];
            }
        }
        cout << cost << endl;
    }
    
}