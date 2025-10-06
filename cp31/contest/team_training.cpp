#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,x; cin >> n >> x;
        vector<long long> a(n);

        for(int i=0; i<n; i++) cin >> a[i];

        sort(a.rbegin(),a.rend());

        long long count = 0, total = 0, minval = 1e9, teams = 0;
        for(int i=0; i<n; i++){
            minval = min(minval,a[i]);
            count++;
            total = minval*count;
            if(total>=x){
                teams++;
                minval = 1e9;
                count = 0;
            }
        }

        cout << teams << endl;

    }
    
}