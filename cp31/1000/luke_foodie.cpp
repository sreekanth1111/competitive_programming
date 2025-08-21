#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n, x; cin >> n >> x;
        vector<int> a(n);

        for(auto &i:a) cin >> i;

        long long l = a[0]-x;
        long long r = a[0]+x;
        int count = 0;

        for(int i=1; i<n; i++){
            if(min(r,a[i]+x)<max(l,a[i]-x)){
                l = a[i]-x;
                r = a[i]+x;
                count++;
            }
            else{
                l = max(l,a[i]-x);
                r = min(r,a[i]+x);
            }
        }

        cout << count << endl;

    }
    
}