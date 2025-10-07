#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,k; cin >> n >> k;
        vector<long long> a(n);
        set<long long> st;

        for(int i=0; i<n; i++){
            cin >> a[i];
            st.insert(a[i]);
        }

        bool ispossible = false;
        for(int i=0; i<n; i++){
            if(st.find(a[i]-k)!=st.end()){
                ispossible = true; 
                break;
            }
        }

        cout << (ispossible ? "YES" : "NO") << endl;

    }
    
}