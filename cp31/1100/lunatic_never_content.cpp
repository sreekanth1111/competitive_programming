#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n);

        for(int i=0; i<n; i++) cin >> a[i];

        long long x = abs(a[0]-a[n-1]);
        
        for(int i=1; i<n/2; i++){
            x = gcd(x,abs(a[i]-a[n-i-1]));
        }

        cout << x << endl;
    }
    
}