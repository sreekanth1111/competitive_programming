#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n);

        for(int i=0; i<n; i++) cin >> a[i];

        long long cnt = 1, num = a[0];
        for(int i=1; i<n; i++){
            if(num+1<a[i]){
                num = a[i];
                cnt++;
            }
        }

        cout << cnt << endl;

    }
    
}