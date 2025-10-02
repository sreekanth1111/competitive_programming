#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long x; cin >> x;
        long long val = 1;

        while(val*2<=x) val <<= 1;

        if(x==val || x==2*val-1){
            cout << -1 << endl;
        }
        else{
            cout << val-1 << endl;
        }
        
    }
    
}