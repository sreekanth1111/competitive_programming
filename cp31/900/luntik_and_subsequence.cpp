#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        int n; cin >> n;
        vector<long long> v(n);
        int zerocount = 0; int onecount = 0;

        for(int i=0; i<n; i++){
            cin >> v[i];
            if(v[i]==0) zerocount++;
            else if(v[i]==1) onecount++;
        }

        cout << (1LL*onecount*(1LL << zerocount)) << endl;
    }
    
}