#include<bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    int j = t;
    bool ispossible[t];

    while(j){
        
        int n, k; cin >> n >> k;
        int arr[n];

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        bool isvalid = true;

        if(k == 1){
            for(int x=0; x<n; x++){
                if(arr[x]>arr[x+1]){
                    isvalid = false;
                    break;
                }
            }
            ispossible[t-j] = isvalid;
        }
        else{
            ispossible[t-j] = true;
        }
        j -= 1;
    }

    for(int i=0; i<t; i++){
        
        if(ispossible[i]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}