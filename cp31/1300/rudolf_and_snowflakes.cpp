#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        long long k;
        bool ispossible = false;
        long long cnt = 0;
        for(int i=2; i<=1e3; i++){
            cnt = 0;
            k = n;
            while(k){
                k--;
                if(k>=i && k%i==0){
                    k /= i;
                    cnt++;
                    if(cnt>=2 && k==1){
                        ispossible = true; break;
                    }
                }
                else break;
            }
            if(ispossible) break;
        }

        cout << (ispossible ? "YES" : "NO") << endl;

    }
    
}