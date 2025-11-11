#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        long long a,b;
        long long val = 1;
        if(n%2==0){
            a = n/2; 
            b = n/2;
        }
        else{
            long long maxval = 1;
            for(int i=2; i*i<=n; i++){
                if(n%i==0){
                    maxval = n/i;
                    break;
                }
            }
            a = maxval;
            b = n-a;
        }
        cout << a << " " << b << endl;

    }
    
}