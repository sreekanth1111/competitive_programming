#include<bits/stdc++.h>

using namespace std;

const long long MOD = 1e9+7;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n),b(n),f(n,0);

        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        for(int i=0; i<n; i++){
            int pos = upper_bound(a.begin(),a.end(),b[i])-a.begin();
            f[i] = n-pos;
        }

        long long count = 1, val = 0;
        for(int i=n-1; i>=0; i--){
            if(f[i]-val<=0){
                count = 0;
                break;
            }
            count = (count*(f[i]-val))%MOD;
            val++;
        }

        cout << count << endl;

    }
    
}