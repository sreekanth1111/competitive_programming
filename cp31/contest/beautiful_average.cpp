#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n; 
        vector<long long> a(n);

        for(int i=0; i<n; i++) cin >> a[i];

        cout << *max_element(a.begin(),a.end()) << endl;

    }
    
}