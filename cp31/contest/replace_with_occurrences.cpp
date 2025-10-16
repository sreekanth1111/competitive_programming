#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n), b(n,0);
        map<long long, vector<long long>> mp;
        vector<long long> order;
        unordered_set<long long> seen;

        for(int i=0; i<n; i++){
            cin >> a[i]; mp[a[i]].push_back(i);
            if(!seen.count(a[i])){
                order.push_back(a[i]);
                seen.insert(a[i]);
            }
        }

        long long val = 1;
        bool isok = true;

        for(auto ele : order){
            auto &ind = mp[ele];
            long long cnt = ind.size();
            
            if(cnt%ele!=0){
                isok = false; break;
            }

            for(long long start=0; start<cnt; start+=ele){
                for(long long j=start; j<start+ele; j++){
                    b[ind[j]] = val;
                }
                val++;
            }
        }

        if(!isok) cout << -1 << endl;
        else{
            for(int i=0; i<n; i++) cout << b[i] << " ";
            cout << endl;
        }

    }
    
}