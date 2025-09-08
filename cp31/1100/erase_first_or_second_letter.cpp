#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        int n; cin >> n;
        string str; cin >> str;

        set<char> st;
        int total = 0;

        for(int i=0; i<n; i++){
            if(st.find(str[i])==st.end()){
                st.insert(str[i]);
                total += n-i;
            }
        }

        cout << total << endl;

    }
}