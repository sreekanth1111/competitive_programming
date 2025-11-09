#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,w; cin >> n >> w;
        vector<long long> a(n),freq(21);
        long long total = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            total += a[i];
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<21; j++){
                if(a[i]&(1LL << j)) freq[j]++;
            }
        }

        long long h = 0;
        while(total){
            long long sum = w;
            for(int j=20; j>=0; j--){
                long long val = (1LL << j);
                long long cnt = min(freq[j],sum/val);
                freq[j] -= cnt;
                sum -= val*cnt;
                total -= val*cnt;
            }
            h++;
        }
        
        cout << h << endl;
    }
    
}