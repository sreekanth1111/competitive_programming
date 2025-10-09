#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n), zeroes(30,0), ones(30,0);

        for(int i=0; i<n; i++) cin >> a[i];

        for(int i=0; i<n; i++){
            long long num = a[i];
            for(int j=0; j<30; j++){
                if(num%2==1) ones[j]++;
                num /= 2;
            }
        }

        for(int i=0; i<30; i++) zeroes[i] = n - ones[i];

        long long sum = 0;
        for(int i=0; i<n; i++){
            long long val = 0;
            for(int j=0; j<30; j++){
                long p = 1LL << j;
                if(((a[i]>>j)&1) == 0) val += ones[j] * p;
                else val += zeroes[j] * p;
            }
            sum = max(sum,val);
        }

        cout << sum << endl;
        
    }
    
}