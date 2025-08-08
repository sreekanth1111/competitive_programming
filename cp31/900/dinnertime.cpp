#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    bool res[t];

    for(int i=0; i<t; i++){
        int n, m, p, q;
        cin >> n >> m >> p >> q;

        if(n%p!=0){
            res[i] = true;
        }
        else{
            if((n/p)*q == m){
                res[i] = true;
            }
            else{
                res[i] = false;
            }
        }
    }

    for(int i=0; i<t; i++){
        if(res[i]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}