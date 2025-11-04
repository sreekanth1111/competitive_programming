#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n+1,0);
        for(int i=2; i<=n; i++) cin >> a[i];
        string s; cin >> s;

        map<long long, vector<long long>> b;
        for(int i=2; i<=n; i++){
            b[a[i]].push_back(i);
        }

        vector<long long> bk(n+1,0),wt(n+1,0);
        for(int i=n; i>0; i--){
            if(!b[i].empty()){
                for(int j=b[i].size()-1; j>=0; j--){
                    bk[i] += bk[b[i][j]];
                    wt[i] += wt[b[i][j]];
                }
            }
            if(s[i-1]=='W') wt[i]++;
            if(s[i-1]=='B') bk[i]++;
        }

        long long ans = 0;
        for(int i=1; i<=n; i++){
            if(bk[i]==wt[i]) ans++;
        }

        cout << ans << endl;



        

        
    }
    
}