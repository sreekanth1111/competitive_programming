#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n+1,0);

        for(int i=1; i<=n; i++) cin >> a[i];

        long long count = 0;
        for(int i=1; i<n; i++){
            for(int j=a[i]-i; j<=n; j+=a[i]){
                if(j>i && (a[i]*a[j])==(i+j)) count++;
            }
        }

        cout << count << endl;
        
    }
    
}