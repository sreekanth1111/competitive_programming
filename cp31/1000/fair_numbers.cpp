#include<bits/stdc++.h>

using namespace std;

bool check(long long i){
    long long x = i;
    long long y = 0;
    while(x){
        y = x%10;
        x /= 10;
        if(y!=0 && i%y!=0) return false;
    }
    return true;
}

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        long long d = ((n+2520-1)/2520)*2520;

        for(long long i=n; i<=d; i++){
            if(check(i)){
                cout << i << endl;
                break;
            } 
        }
        
        
    }
    
}