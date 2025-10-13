#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long n,k; cin >> n >> k;

        if((n&1)==0){
            long long val = (k-1)%n + 1;
            cout << val << endl;
        }
        else{
            long long extra_shifts = (k-1)/(n/2);
            long long val = (k-1+extra_shifts)%n + 1;
            cout << val << endl;
        }
        

    }
    
}