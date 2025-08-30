#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long pips; cin >> pips;

        int rem = pips%14;

        if(rem>=1 && rem<=6 && pips>=14) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
}