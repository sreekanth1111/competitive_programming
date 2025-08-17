#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        string str; cin >> str;
        set<char> set1, set2;
        vector<int> pre(n), suf(n);

        for(int i=0; i<n; i++){
            set1.insert(str[i]);
            pre[i] = set1.size();
        }

        for(int i=n-1; i>=0; i--){
            set2.insert(str[i]);
            suf[i] = set2.size();
        }

        int count = 0;
        for(int i=0; i<n-1; i++){
            count = max(count,pre[i]+suf[i+1]);
        }

        cout << count << endl;

        
        
        
    }
    
}