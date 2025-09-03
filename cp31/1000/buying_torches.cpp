#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long x,y,k; cin >> x >> y >> k;
        long long total_sticks = (y+1)*k;
        long long stick_op = (total_sticks-1+x-2)/(x-1);
        long long coal_op = k;
        cout << stick_op+coal_op << endl;
        
    }
    
}