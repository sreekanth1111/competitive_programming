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

        int sum = 0;

        for(int j=0; j<n; j++){
            sum += arr[j];
        }

        if((2*sum)%n == 0){
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