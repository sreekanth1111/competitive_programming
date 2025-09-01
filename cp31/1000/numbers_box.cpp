#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        int n,m; cin >> n >> m;
        vector<vector<int>> a(n,vector<int>(m));

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> a[i][j];
            }
        }

        long long sum = 0;
        int negcount = 0;
        long long minval = 1e5;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j]<0) negcount++;
                sum += abs(a[i][j]);
                minval = min(minval,1LL*abs(a[i][j])); 
            }
        }

        if(negcount%2!=0) sum -= (2*minval);

        cout << sum << endl;
    }
    
}