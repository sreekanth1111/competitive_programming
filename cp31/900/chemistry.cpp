#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n, k; cin >> n >> k;
        string s; cin >> s;
        vector<int>freq(26);

        for(auto ch : s){
            freq[ch-'a']++;
        }

        sort(freq.begin(),freq.end());

        int total = n - k;

        int oddcount = 0;

        for(auto i : freq){
            if(i%2!=0) oddcount++;
        }

        if(oddcount <= k + (total%2)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}