#include<bits/stdc++.h>

using namespace std;



int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        vector<long long> freq(31);
        for(int i=0; i<n; i++){
            long long val = a[i];
            for(int j=0; j<31; j++){
                if(val & (1LL << j)){
                    freq[j]++;
                }
            }
        }

        bool ispossible = true;
        vector<long long> ans;
        for(int i=1; i<=n; i++){
            ispossible = true;
            for(int j=0; j<31; j++){
                if(freq[j]%i != 0){
                    ispossible = false; 
                    break;
                }
            }
            if(ispossible) ans.push_back(i);
        }
        
        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    
}