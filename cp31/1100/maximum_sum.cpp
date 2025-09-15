#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,k; cin >> n >> k;
        vector<long long> a(n),p(n);

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a.begin(),a.end());

        p[0] = a[0];
        for(int i=1; i<n; i++){
            p[i] = p[i-1]+a[i];
        }

        long long sum = p[n-k-1];
        for(int i=1; i<=k; i++){
            sum = max(sum,p[n+i-k-1]-p[2*i-1]);
        }
        
        cout << sum << endl;
    }
    
}