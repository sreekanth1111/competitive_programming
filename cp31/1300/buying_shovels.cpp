#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,k; cin >> n >> k;
        set<long long> st;

        for(int i=1; i*i<=n; i++){
            if(n%i==0){
                st.insert(i);
                st.insert(n/i);
            }
        }

        long long ans;
        for(auto it=st.rbegin(); it!=st.rend(); ++it){
            ans = *it;
            if(ans<=k) break;
        }

        cout << n/ans << endl;
        

    }
    
}