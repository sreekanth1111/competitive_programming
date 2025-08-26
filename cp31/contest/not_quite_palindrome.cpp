#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        int n, k; cin >> n >> k;
        string s; cin >> s;
        int ones = 0, zeroes = 0;

        for(char ch : s){
            if(ch=='0') zeroes++;
            else ones++;
        }

        int maxval = (ones/2) + (zeroes/2);
        int minval = (max(ones,zeroes)-min(ones,zeroes))/2;

        if(k>=minval && k<=maxval && (k-minval)%2==0) cout << "YES" << endl;
        else cout << "NO" << endl;



    }
    
}