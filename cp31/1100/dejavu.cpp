#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,q; cin >> n >> q;
        vector<long long> a(n),b(q);

        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<q; i++) cin >> b[i];

        long long minval = 31;

        for(int i=0; i<q; i++){
            if(b[i]>=minval) continue;
            else{
                minval = b[i];
                long long add = 1LL << (minval-1);
                long long div = 1LL << (minval);
                for(int j=0; j<n; j++){
                    if(a[j]%div==0) a[j] += add;
                }
            }
        }

        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }
        cout << endl;

        
    }
    
}