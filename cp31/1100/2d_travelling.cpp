#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,k,a,b; cin >> n >> k >> a >> b;
        vector<pair<long long, long long>> coords(n);

        for(int i=0; i<n; i++) cin >> coords[i].first >> coords[i].second;

        long long x = coords[a-1].first, y = coords[a-1].second;
        long long min_a = 1e10;

        for(int i=0; i<k; i++){
            pair<long long, long long> p = coords[i];
            min_a = min(min_a,abs(x-p.first)+abs(y-p.second));
        }

        x = coords[b-1].first, y = coords[b-1].second;
        long long min_b = 1e10;

        for(int i=0; i<k; i++){
            pair<long long, long long> p = coords[i];
            min_b = min(min_b,abs(x-p.first)+abs(y-p.second));
        }

        cout << min(min_a+min_b,abs(coords[a-1].first-coords[b-1].first)+
                    abs(coords[a-1].second-coords[b-1].second)) << endl;;







        
    }
    
}