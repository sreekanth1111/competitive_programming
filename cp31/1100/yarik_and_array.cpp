#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n);

        for(int i=0; i<n; i++) cin >> a[i];

        long long maxending = a[0], maxsum = a[0];

        for(int i=1; i<n; i++){
            if((a[i-1]&1)!=(a[i]&1)){
                maxending = max(maxending+a[i],a[i]);
            }
            else{
                maxending = a[i];
            }
            maxsum = max(maxsum,maxending);
        }

        cout << maxsum << endl;
    }
    
}