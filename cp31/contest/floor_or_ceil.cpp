#include<bits/stdc++.h>

using namespace std;

long long c(long long x, long long n){
    while(n--){
        if(x<=1) return x;
        x = (x+1) >> 1;
    }
    return x;
}

long long f(long long x, long long n){
    while(n--){
        if(!x) return x;
        x = (x) >> 1;
    }
    return x;
}



int main(){
    int t; cin >> t;

    while(t--){
        
        long long x,n,m; cin >> x >> n >> m;
        
        cout << f(c(x,m),n) << " " << c(f(x,n),m) << endl;

    }
    
}