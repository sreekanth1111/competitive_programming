#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,k; cin >> n >> k;
        vector<vector<int>> a(n,vector<int>(n));

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++) cin >> a[i][j];
        }

        long long count = 0;
        int j=0;

        while(j<(n/2)){
            for(int i=0; i<n; i++){
                if(a[j][i]!=a[n-j-1][n-i-1]) count++;
            }            
            j++;
        }

        if(n%2==1){
            j = n/2;
            for(int i=0; i<n/2; i++){
                if(a[j][i]!=a[n-j-1][n-i-1]) count++;
            }
        }
        

        if(count <= k && ((n % 2 == 1) || ((k - count) % 2 == 0))) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    
}