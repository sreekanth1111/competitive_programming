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

        int max = abs(arr[0]);
        bool istrue = false;

        for(int j=1; j<n; j++){
            if(max < abs(arr[j])){
                istrue = true;
                break;
            }
        }

        if(n==1 || istrue){
            res[i] = true;
        }
        else{
            res[i] = false;
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