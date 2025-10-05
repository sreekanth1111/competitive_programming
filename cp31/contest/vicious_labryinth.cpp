#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,k; cin >> n >> k;
        vector<long long > a(n+1,0);

        a[n] = n-1;
        if(k%2==0){
            for(int i=1; i<n; i++) a[i] = n-1;
            a[n-1] = n;
        }
        else{
            for(int i=1; i<n; i++) a[i] = n;
        }

        for(int i=1; i<=n; i++) cout << a[i] << " ";
        cout << endl;



    }
    
}