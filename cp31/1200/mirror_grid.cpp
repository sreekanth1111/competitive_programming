#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        int n; cin >> n;
        vector<vector<int>> a(n,vector<int>(n));

        for(int i=0; i<n; i++){
            string str; cin >> str;
            for(int j=0; j<n; j++){
                if(str[j]=='1') a[i][j] = 1;
                else a[i][j] = 0;
            }
        }

        long long count = 0, sum = 0, val = 0;
        int j=0;

        while(j<n/2){
            for(int i=j; i<n-j-1; i++){
                sum = a[j][i]+a[i][n-j-1]+a[n-j-1][n-i-1]+a[n-i-1][j];
                count += min(4-sum, sum);
            }
            j++;
        }

        cout << count << endl;

    }
    
}