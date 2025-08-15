#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        string s; cin >> s;
        int countzero = 0;
        int countone = 0;

        for(auto ch : s){
            if(ch == '0') countzero++;
            else countone++;
        }

        for(auto ch : s){
            if(ch == '0'){
                if(countone>0) countone--;
                else break;
            }
            else{
                if(countzero>0) countzero--;
                else break;
            }
        }

        cout << countzero+countone << endl;
    }
    
}