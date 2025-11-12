#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        long long a = 1,b = 1,c = 1;

        for(int i=2; i*i<=n; i++){
            if(n%i==0){
                if(a==1) a = i;
                else if(b==1){
                    b = i;
                    c = n/i;
                }
                 
                n /= i;
            }
        }
        

        if(a!=1 && b!=1 && c!=1 && a!=b && b!=c && a!=c){
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        } 
        else{
            cout << "NO" << endl;
        }
        

    }
    
}