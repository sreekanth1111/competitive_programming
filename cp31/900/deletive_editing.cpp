#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    while(n--){
        
        string s,t; cin >> s >> t;
        vector<int> sfreq(26, 0), tfreq(26, 0), scount(26, 0);

        for(char ch : s) sfreq[ch-65]++;

        for(char ch : t) tfreq[ch-65]++;

        string res = "";
        int len = s.size();

        for(char ch : s){
            char i = ch - 65;
            if(sfreq[i]-tfreq[i]<=scount[i] && tfreq[i]>0){
                res += i + 'A';
            }
            else{
                scount[i]++;

            }
        }

        if(res == t) cout << "YES" << endl;
        else cout << "NO" << endl;



    }
    
}