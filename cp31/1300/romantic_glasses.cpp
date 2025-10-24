#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n+1),p(n+1,0);
        map<long long, long long> mp;
        bool ispossible = true;

        for(int i=1; i<=n; i++) cin >> a[i];

        for(int i=1; i<=n; i++){
            if(i%2==0) a[i] *= -1;
        }

        mp[0]++;
        for(int i=1; i<=n; i++){
            p[i] = p[i-1]+a[i];
            
            if(++mp[p[i]]>1){
                ispossible = false;
                break;
            }
        }


        cout << (!ispossible ? "YES" : "NO" ) << endl;




    }
    
}