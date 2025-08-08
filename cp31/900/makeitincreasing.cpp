#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector<int>arr(n);
        int total = 0;


        for(auto &i:arr){
            cin >> i;
        }

        for(int j=n-2; j>=0; j--){
            while(arr[j]>=arr[j+1] && arr[j]>0){
                arr[j] /= 2;
                total += 1;
            }

            if(arr[j] == arr[j+1]){
                total = -1;
                break;
            }
        }

        cout << total << endl;
    }

    
}