#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n+1,0);
        
        if(n==1){
            cout << 1 << endl;
            continue;
        }
        if(n%2==0){
            cout << -1 << endl;
            continue;
        }
        int i;
        a[1] = 2;
        for(i=2; i<=n/2; i++) a[i] = a[i-1] + 2;
        
        a[i++] = 1;
        for(i; i<=n; i++) a[i] = a[i-1] + 2;

        for(int i=1; i<=n; i++) cout << a[i] << " ";
        cout << endl;
    }
    
}