#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector<int>a(n);

        for(auto &i:a){
            cin >> i;
        }

        int val = a[0];

        for(int i=1; i<n; i++){
            val = val^a[i];
        }

        if(n%2==0){
            if(val==0){
                cout << 0 << endl;
            }
            else{
                cout << -1 << endl;
            }
        }
        else{
            cout << val << endl;
        }
    }

    
}