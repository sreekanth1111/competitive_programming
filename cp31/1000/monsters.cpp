#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        long long n, k; cin >> n >> k;
        vector<pair<long long, long long>>arr(n);
        long long val;
        

        for(int i=0; i<n; i++){
            cin >> val;
            val %= k;
            if(val%k==0){
                val = k;
            }

            arr[i] = {val, i + 1};;
        }

        stable_sort(arr.begin(), arr.end(), [](auto &a, auto &b){return a.first > b. first;});

        for(int i=0; i<n; i++){
            cout << arr[i].second << " ";
        }
        cout << endl;

        
    }

    
}