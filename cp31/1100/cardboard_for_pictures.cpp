#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,c; cin >> n >> c;
        vector<long long> a(n);

        for(int i=0; i<n; i++) cin >> a[i];

        long long l = 0, r = 1e9, mid = 0;
        while(r-l>1){
            mid = (l+r)/2;
            __int128 sum = 0;
            for(int i=0; i<n; i++){
                __int128 x = 2*mid+a[i];
                sum += x*x;
            }
            if(sum>c){
                r = mid;
            }
            else if(sum<c){
                l = mid;
            }
            else{
                r = mid;
                break;
            }
            
        }

        cout << r << endl;

        
    }
    
}