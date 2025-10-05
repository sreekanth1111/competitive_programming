#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n+1,0);
        map<long long, int> mp;

        for(int i=1; i<=n; i++){
            cin >> a[i];
            mp[a[i]-i]++;
        }

        long long val = 0;

        for(auto &p : mp){
            if(p.second!=0){
                val += 1LL * (p.second)*(p.second-1)/2;
            }
        }

        cout << val << endl;

        

        

        
    }
    
}