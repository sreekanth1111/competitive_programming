#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        int n; cin >> n;
        vector<int> a(n);

        for(int i=0; i<n; i++) cin >> a[i];

        bool istrue = false;

        for(int i = 1; i<n-1; i++){
            if(a[i-1]<a[i] && a[i+1]<a[i]){
                cout << "YES" << endl;
                cout << i << " " << i+1 << " " << i+2 << endl;
                istrue = true;
                break;
            }
        }
        if(!istrue){
            cout << "NO" << endl;
        }
    }
    
}