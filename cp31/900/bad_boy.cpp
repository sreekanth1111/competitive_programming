#include<bits/stdc++.h>

using namespace std;

long long d(long long a, long long b, long long c, long long d){
    return abs(a-c)+abs(b-d);
}

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,m,i,j; cin >> n >> m >> i >> j;

        long long d1 = d(i,j,1,1) + d(1,1,n,m) + d(n,m,i,j);
        long long d2 = d(i,j,1,m) + d(1,m,n,1) + d(n,1,i,j);


        if(d1>=d2){
            cout << 1 << " " << 1 << " " << n << " " << m << endl;
        }
        else{
            cout << 1 << " " << m << " " << n << " " << 1 << endl;
        }

        
        
    }
    
}