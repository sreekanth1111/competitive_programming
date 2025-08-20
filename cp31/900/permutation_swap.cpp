#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        int n; cin >> n;
        vector<int> p(n+1);
        int k = 0;

        for(int i=1; i<=n; i++){
            cin >> p[i];
            k = gcd(k,abs(p[i]-i));
            
        }

        cout << k << endl;

    }
    
}