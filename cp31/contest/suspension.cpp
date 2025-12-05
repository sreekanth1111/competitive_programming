#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        long long y,r; cin >> y >> r;

        long long total = r;
        total += y/2;

        if(total >= n){
            total = n;
        }

        cout << total << endl;
    }
    
}