#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n),cnt(n);
        set<long long> st;

        for(int i=0; i<n; i++){
            cin >> a[i];
            st.insert(a[i]);
            cnt[i] = st.size();
        }
        st.clear();

        long long count = 0, freq = cnt[n-1];
        for(int i=n-1; i>=0; i--){
            st.insert(a[i]);
            if(freq==st.size()){
                count++;
                if(i==0) break;
                freq = cnt[i-1];
                st.clear();
            }
        }

        cout << count << endl;

    }
    
}