#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n);

        for(int i=0; i<n; i++) cin >> a[i];

        long long val = -1;

        for(int i=0; i<n; i++){
            if(a[i]!=i){
                if(val==-1) val = a[i];
                else val &= a[i];
            }
        }

        cout << val << endl;

        
    }
    
}