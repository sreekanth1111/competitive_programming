#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n; 
        char ch; cin >> ch;
        string str; cin >> str;
        long long len = str.size();

        long long count = 0;

        for(int i=0; i<n; i++){
            if(str[i]!=ch) count++;
        }

        int good = -1;
        int i,j;
        for(i=1; i<=n; i++){
            bool ok = true;
            for(j=i; j<=n; j+=i){
                if(str[j-1]!=ch){
                    ok = false;
                    break;
                }
            }
            if(ok){
                good = i;
                break;
            }
        }

        if(count==0) cout << 0 << endl;
        else{
            if(good!=-1){
                cout << 1 << endl;
                cout << good << endl;
            }
            else{
                cout << 2 << endl;
                cout << n << " " << n-1 << endl;
            }
        }
        


    }
    
}