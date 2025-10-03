#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        string s; cin >> s;
        set<string> st1, st2, st3;

        string alphabet = "abcdefghijklmnopqrstuvwxyz";

        for(char c : alphabet) st1.insert(string(1,c));
        for(int i=0; i<n; i++) st1.erase(string(1,s[i]));
        if(!st1.empty()){
            cout << *st1.begin() << endl;
            continue;
        }


        for(char c1 : alphabet){
            for(char c2 : alphabet) st2.insert(string(1,c1)+string(1,c2));
        }
        for(int i=0; i<n-1; i++) st2.erase(s.substr(i,2));
        if(!st2.empty()){
            cout << *st2.begin() << endl;
            continue;
        }


        for(char c1 : alphabet){
            for(char c2 : alphabet){
                for(char c3 : alphabet){
                    st3.insert(string(1,c1)+string(1,c2)+string(1,c3));
                } 
            }
        }
        for(int i=0; i<n-2; i++) st3.erase(s.substr(i,3));
        if(!st3.empty()){
            cout << *st3.begin() << endl;
            continue;
        }

    }
    
}