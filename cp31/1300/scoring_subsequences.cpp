#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        vector<long long> b(n);
        int len = 0;
        for(int i=0; i<n; i++){
            while((len+1)<=(i+1) && a[i-len]>=(len+1)){
                len++;
            }
            b[i] = len;
        }

        for(int i=0; i<n; i++) cout << b[i] << " ";
        cout << endl;
    }
    
}