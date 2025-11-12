#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        long long totalsum = 0;
        for(int i=0; i<n; i++) totalsum += a[i];

        long long sum = 0, maxsum = -1e9;
        for(int i=0; i<n-1; i++){
            sum += a[i];
            maxsum = max(maxsum,sum);
            if(sum<0) sum = 0;
        }

        long long sum1 = 0, maxsum1 = -1e9;
        for(int i=1; i<n; i++){
            sum1 += a[i];
            maxsum1 = max(maxsum1,sum1);
            if(sum1<0) sum1 = 0;
        }

        maxsum = max(maxsum,maxsum1);

        cout << (totalsum>maxsum ? "YES" : "NO") << endl;

    }
    
}