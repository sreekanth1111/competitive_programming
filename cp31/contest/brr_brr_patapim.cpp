#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        
        long long n; cin >> n;
        vector<vector<long long>> a(n+1,vector<long long>(n+1));

        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++) cin >> a[i][j];
        }

        vector<long long> v(2*n+1,0);
        set<long long> st;

        for(int i=1; i<=2*n; i++){
            st.insert(i);
        }

        for(int i=2; i<=2*n; i++){
            long long l = (i+1)/2;
            long long r = i/2;
            v[i] = a[l][r];
            st.erase(a[l][r]);
        }

        v[1] = *st.begin();

        for(int i=1; i<=2*n; i++){
            cout << v[i] << " ";
        }
        cout << endl;

    }
    
}