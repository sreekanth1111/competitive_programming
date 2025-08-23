#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        int n,k; cin >> n >> k;
        string str; cin >> str;
        int col = 10000000, val = 0;

        for(int i=0; i<k; i++){
            if(str[i]=='W') val++;
        }
        col = val;

        for(int i=k; i<n; i++){
            if(str[i-k]=='W') val--;
            if(str[i]=='W') val++;

            col = min(col,val);
        }
        
        cout << col << endl;

    }
    
}