#include<bits/stdc++.h>

using namespace std;

int main(){
    
    string s; cin >> s;
    long long n = s.size();
    for(int i=1; i<n; i++){
        if(s[i-1]==s[i]){
            for(int j=0; j<26; j++){
                char ch = 'a' + j;
                if(ch!=s[i-1] && (i+1==n || ch!=s[i+1])){
                    s[i] = ch;
                    break;
                }
            }
        }
    }

    cout << s << endl;
}