#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n); 
        for(int i=0; i<n; i++) cin >> a[i];
        map<long long, long long> mp;

        for(int i=0; i<n; i++){
            long long num = a[i];
            for(long long j=2; j*j<=num; j++){
                while(num>=2 && num%j==0){
                    mp[j]++;
                    num /= j;
                }
            }
            if(num>1) mp[num]++;
        }

        bool ispossible = true;
        for(auto &x : mp){
            if(x.second%n!=0){
                ispossible = false;
                break;
            }
        }

        cout << (ispossible ? "YES" : "NO") << endl;


    }
    
}