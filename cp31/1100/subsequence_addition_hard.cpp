#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n);
        long long sum = 1;
        bool ispossible = true;

        for(int i=0; i<n; i++) cin >> a[i];
        sort(a.begin(),a.end());
        
        for(int i=0; i<n; i++){
            if(a[i]<=sum){
                if(i!=0) sum += a[i];
            }
            else{
                ispossible = false;
                break;
            }
        }

        if(ispossible) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
}