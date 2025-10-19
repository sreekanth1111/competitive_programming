#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,k; cin >> n >> k;
        string str; cin >> str;

        bool isfirst = false;
        long long cnt = 0;
        long long first_index;
        for(int i=0; i<str.length(); i++){
            if(str[i]=='1'){
                if(!isfirst){
                    isfirst = true; cnt++;
                }
                else{
                    if(i-first_index>(k-1)){
                        cnt++;
                    }
                }
                first_index = i;
            }
        }

        cout << cnt << endl;

    }
    
}