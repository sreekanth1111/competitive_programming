#include<bits/stdc++.h>

using namespace std;


int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,x; cin >> n >> x;
        vector<long long > a(n);

        for(int i=0; i<n; i++) cin >> a[i];

        long long sum = 0, minval = 0, maxval = 0;

        for(int i=0; i<n; i++){
            sum += a[i];
            maxval += ((a[i]+x-1)/x); 
        }

        minval = ((sum+x-1)/x);

        cout << minval << " " << maxval << endl;
    }

}