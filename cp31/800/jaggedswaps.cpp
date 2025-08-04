#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    bool res[t];

    for(int i=0; i<t; i++){
        int n; cin >> n;
        int arr[n];

        for(int j=0; j<n; j++){
            cin >> arr[j];
        }

        bool ispossible = true;
        
        if(arr[0]!=1){
            ispossible = false;
        }

        res[i] = ispossible;
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