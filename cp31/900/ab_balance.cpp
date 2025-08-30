#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        string s; cin >> s;
        
        int countab = 0, countba = 0;

        int pos = s.find("ab");
        while(pos!=string::npos){
            countab++;
            pos = s.find("ab",pos+1);
        }

        pos = s.find("ba");
        while(pos!=string::npos){
            countba++;
            pos = s.find("ba",pos+1);
        }

        if(countab!=countba){
            s[0] = s.back();
        }
        cout << s << endl;


    }
    
}