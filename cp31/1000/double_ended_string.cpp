#include<bits/stdc++.h>

using namespace std;

int longestcommonsubstring(string a, string b){
    int n = a.size();
    int m = b.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));

    int ans = 0;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(a[i-1]==b[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
                ans = max(ans,dp[i][j]);
            }
            else{
                dp[i][j] = 0;
            }
        }
    }

    return ans;
}

int main(){
    int t; cin >> t;

    while(t--){
        
        string a,b;
        cin >> a;
        cin >> b;
        
        int comsub = 2 * longestcommonsubstring(a,b);

        cout << a.size() + b.size() - comsub << endl;
    }
    
}