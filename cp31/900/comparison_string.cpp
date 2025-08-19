#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        int n; cin >> n;
        string str; cin >> str;

        int count = 1;
        int total = 0;
        char c = 'a';
        for(auto ch : str){
            if(c == ch){
                count++;
            }
            else{
                total = max(total,count);
                count = 1;
                c = ch;
                count++;
            }
        }
        total = max(total,count);

        cout << total << endl;
    }
    
}