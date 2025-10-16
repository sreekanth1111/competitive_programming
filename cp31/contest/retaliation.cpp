#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n);

        for(int i=0; i<n; i++) cin >> a[i];

        long long diff = a[1]-a[0];

        for(int i=0; i<n; i++){
            if(diff>=0) a[i] -= diff*(i+1);
            else a[i] -= abs(diff)*(n-i);
        }

        long long k = a[0];
        bool isok = true;
        for(int i=0; i<n; i++){
            if(a[i]!=k || a[i]<0 || k%(n+1)!=0){
                isok = false; break;
            }
        }

        cout << (isok ? "YES" : "NO") << endl;
        
    }
    
}