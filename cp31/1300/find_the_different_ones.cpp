#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n+1,0);
        for(int i=1; i<=n; i++) cin >> a[i];

        long long q; cin >> q;
        vector<pair<long long, long long>> b(q);
        for(int i=0; i<q; i++) cin >> b[i].first >> b[i].second;

        vector<long long> res(n+1);

        res[1] = -1;
        for(int i=2; i<=n; i++){
            if(a[i]!=a[i-1]) res[i]= i-1;
            else res[i] = res[i-1];
        }

        for(int i=0; i<q; i++){
            long long ind = res[b[i].second];
            long long start = b[i].first;
            if(ind == -1 || ind<start){
                cout << -1 << " " << -1 << endl;
            }
            else{
                cout << ind << " " << b[i].second << endl;
            }
        }
    }
    
}