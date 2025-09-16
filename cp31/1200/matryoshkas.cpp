#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n);
        map<long long, long long> mp;

        for(int i=0; i<n; i++){
            cin >> a[i];
            mp[a[i]]++;
        } 

        long long count = 0;
        long long prev_val = -1;
        long long prev_freq = 0;
        for(auto &p : mp){
            long long val = p.first;
            long long freq = p.second;
            
            if(val==prev_val+1){
                if(freq>prev_freq) count += freq-prev_freq;
            }
            else{
                count += freq;
            }
            prev_val = val;
            prev_freq = freq;
        }

        cout << count << endl;
    }
    
}