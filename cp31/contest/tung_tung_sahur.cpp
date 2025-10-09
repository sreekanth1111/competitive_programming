#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        string p,s; cin >> p >> s;
        int n = p.length();
        int m = s.length();
        bool ispossible = true;

        int i=0, j=0;

        while(i<n){
            char curr = p[i];
            int k = 0;
            while(i<n && p[i]==curr){
                k++;
                i++;
            }

            int cnt = 0;
            while(j<m && s[j]==curr){
                j++;
                cnt++;
            }

            if(cnt<k || cnt>2*k){
                ispossible = false;
                break;
            }
        }

        if(j!=m) ispossible = false;

        cout << (ispossible ? "YES" : "NO") << endl;

    }

}