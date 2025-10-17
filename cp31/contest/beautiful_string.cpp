#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n; 
        string s; cin >> s;
        vector<long long> a;

        for(int i=0; i<s.length(); i++){
            if(s[i]=='1') a.push_back(i+1);
        }

        cout << a.size() << endl;
        for(int i=0; i<a.size(); i++) cout << a[i] << " ";
        cout << endl;

    }
    
}