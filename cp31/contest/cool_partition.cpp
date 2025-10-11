#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n);

        for(int i=0; i<n; i++) cin >> a[i];

        long long cnt = 1, num = a[0];
        set<long long> st;
        st.insert(a[0]);

        int i=1;
        long long total = 1;
        while(i<n){
            long long val = 0;
            if(*st.find(a[i]!=*st.end())){
                val++;
                if(total==val){
                    total++;
                }
            }
        }

        cout << cnt << endl;

    }
    
}