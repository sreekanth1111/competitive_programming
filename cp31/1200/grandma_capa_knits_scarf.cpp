#include<bits/stdc++.h>

using namespace std;

long long palindrome(string str, char ch){
    long long l = 0, r = str.size()-1;
    long long deletions = 0;

    while(l<r){
        if(str[l]==str[r]){
            l++; r--;
        }
        else if(str[l]==ch){
            l++; deletions++;
        }
        else if(str[r]==ch){
            r--; deletions++;
        }
        else{
            return 1e9;
        }
    }
    return deletions;
}

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        string str; cin >> str; 
        set<char> st;

        for(int i=0; i<n; i++) st.insert(str[i]);

        long long minval = 1e9, val;

        for(char ch : st){
            val = palindrome(str,ch);
            minval = min(minval,val);
        }

        if(minval==1e9) cout << -1 << endl;
        else cout << minval << endl;
        
    }
    
}