#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        string str; cin >> str;

        long long zeroes = 0;
        for(int i=0; i<n; i++){
            if(str[i]=='0') zeroes++;
        }

        if(zeroes%2==0){
            if(zeroes==0) cout << "DRAW" << endl;
            else cout << "BOB" << endl;
        }
        else{
            if(zeroes==1) cout << "BOB" << endl;
            else cout << "ALICE" << endl;
        }

        
    }
    
}