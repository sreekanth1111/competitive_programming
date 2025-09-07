#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        int k,x; cin >> k >> x;
        int res = x;
        for(int i=0; i<k; i++){
            res *= 2;
        }
        cout << res << endl;
    }
}