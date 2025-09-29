#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,x; cin >> n >> x;
        vector<long long> a(n);

        for(int i=0; i<n; i++) cin >> a[i];
        sort(a.begin(),a.end());

        long long l = 0, r = 1e10, mid = 0;

        while(r-l>1){
            mid = (l+r)/2;
            long long sum = 0;
            for(int i=0; i<n; i++){
                if(mid-a[i]>0) sum += mid-a[i];
                else break;
            }
            if(sum>x) r = mid;
            else l = mid;
        }

        cout << l << endl;
    }
    
}