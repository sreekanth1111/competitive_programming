#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n);

        for(int i=0; i<n; i++) cin >> a[i];

        if(a[n-2]>a[n-1]){
            cout << -1 << endl;
        }
        else if(a[n-1]>=0){
            cout << n-2 << endl;
            for(int i=1; i<n-1; i++){
                cout << i << " " << n-1 << " " << n << endl;
            }
        }
        else{
            if((is_sorted(a.begin(),a.end()))) cout << 0 << endl;
            else cout << -1 << endl;
        }
 
    }
    
}