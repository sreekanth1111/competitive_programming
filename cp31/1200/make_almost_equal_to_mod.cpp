#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        int n; cin >> n;
        vector<long long> a(n),b(n);

        for(int i=0; i<n; i++) cin >> a[i];

        bool ispossible = false;
        long long k = 1;
        
        while(!ispossible){
            set<int> st;
            for(int i=0; i<n; i++){
                b[i] = a[i]&1;
                a[i] >>= 1;
                st.insert(b[i]);
            }
            k <<= 1;
            if(st.size()==2){
                break;
            }
        }

        cout << k << endl;
        
    }
}