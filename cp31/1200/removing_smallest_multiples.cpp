#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        string str; cin >> str;
        vector<bool> deleted(n+1,false);
        long long total = 0;

        for(int i=1; i<=n; i++){
            for(int j=i; j<=n; j+=i){
                if(str[j-1]=='0' && !deleted[j]){
                    total += i;
                    deleted[j] = true;
                }
                else if(str[j-1]=='1'){
                    break;
                }
            }
        }

        cout << total << endl;
        
    }
    
}