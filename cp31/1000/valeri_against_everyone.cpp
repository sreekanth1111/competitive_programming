#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        int n; cin >> n;
        vector<long long>a(n);
        set<int> st;


        for(int i=0; i<n; i++){
            cin >> a[i];
            st.insert(a[i]);
        }


        if(a.size()!=st.size()) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    
}