#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,k; cin >> n >> k;
        vector<long long> c(n);
        vector<vector<long long>> pos(k+1);

        for(int i=0; i<n; i++){
            cin >> c[i];
            pos[c[i]].push_back(i+1);
        }

        long long ans = n;
        for(int i=1; i<=k; i++){

            if(pos[i].empty()) continue;

            vector<long long> gaps;
            gaps.push_back(pos[i][0]-1);
            long long len = pos[i].size();

            for(int j=1; j<len; j++){
                gaps.push_back(pos[i][j]-pos[i][j-1]-1);
            }
            gaps.push_back(n-pos[i][len-1]);

            sort(gaps.begin(),gaps.end());
            long long len1 = gaps.size();
            long long largest = gaps[len1-1];
            long long second_largest = (len1>1 ? gaps[len1-2] : 0);
            
            long long val = max(((largest%2==0&&largest!=0)+(largest-1)/2),second_largest);
            ans = min(val,ans);
        }

        cout << ans << endl;


    }
    
}