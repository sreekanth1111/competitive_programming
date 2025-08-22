#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> s(n+1);
        map<long long, int> f;
        bool ispossible = true;

        for(int i=1; i<=n; i++){
            cin >> s[i];
            f[s[i]]++;
        }

        for(auto &x : f){
            if(x.second==1){
                ispossible = false;
                break;
            }
        }


        if(!ispossible){
            cout << -1 << endl;
        }
        else{
            long long size = s[1], ind = 1;
            for(int i=1; i<n; i++){
                if(size == s[i+1]){
                    cout << i+1 << " ";
                }
                else{
                    cout << ind << " ";
                    size = s[i+1];
                    ind = i+1;
                }
            }
            cout << ind << endl;
        }


    }
    
}