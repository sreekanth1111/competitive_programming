#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        string s; cin >> s;
        set<char> st;

        for(int i=0; i<s.length(); i++)  st.insert(s[i]);

        int k = st.size();
        bool isok = true;

        for(int i=0; i<s.length(); i++){

            string str = s.substr(i,k);
            vector<int> a(26,0);
            for(char ch : str){
                a[ch-'a']++;
                if(a[ch-'a']>=2){
                    isok = false;
                    break;
                }
            }
            if(!isok) break;
        }

        cout << (isok ? "YES" : "NO") << endl;


    }

    
    
}